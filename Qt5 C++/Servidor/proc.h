#ifndef PROC_H
#define PROC_H

#include <fstream>
#include <sys/wait.h>
#include "session.h"
#include "color.h"

bool isRunning()
{
	std::ifstream pidFile(Session::getInstance().pidfile);
    if (!pidFile.is_open())
    {
        return false;
    }
    pid_t pid;
    pidFile >> pid;
    if (kill(pid, 0) == 0 && errno != ESRCH)
    {
        return true;
    }
    return false;
}

void writePid()
{
	std::ofstream pidFile(Session::getInstance().pidfile);
	if (!pidFile.is_open())
	{
        char str[100];
        sprintf(str, "Erro ao escrever PID no arquivo %s", Session::getInstance().pidfile.c_str());
        pmensagem(RED, str);
		exit(1);
	}
	pidFile << getpid();
}

int TerminalCommand(const char *command)
{
	return system(command);
}

#endif