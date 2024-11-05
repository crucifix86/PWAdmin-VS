extern "C"
{
#include "inc/iniparser.h"
}

#include "color.h"
#include "session.h"
#include "proc.h"
#include "server.h"

int init()
{
    writePid();

     std::streambuf *oldCoutStreamBuf = std::cout.rdbuf();
     std::ofstream nullStream("/dev/null");
     std::cout.rdbuf(nullStream.rdbuf());
     std::cout.rdbuf(oldCoutStreamBuf); // restaura saida padrao

    setenv("HOME", Session::getInstance().homepath.c_str(), 1);

    try
    {
        ServerSocket server(Session::getInstance().port);
        server.start();
    }
    catch (const std::exception &e)
    {
        pmensagem(CYAN, e.what());
        return 1;
    }

    return 0;
}

int main2()
{
    Session &s = Session::getInstance();
    if (!s.ReadConfig())
        return 1;
    
        OctetsStream os;
        os << 1024;
        os << 22;
        os << 0;
        os << "";
        os.Encode(opGMListOnlineUser);
        OctetsStream res = os.SendTCP("127.0.0.1", 29100);
        cout <<bytesToHexString(res.data) << endl;
        
    return 0;
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cerr << "Uso: " << argv[0] << " <" << mensagem(GREEN, "start", false) << "|" << mensagem(GREEN, "stop", false) << ">" << std::endl;
        return 1;
    }

    Session &s = Session::getInstance();
    if (!s.ReadConfig())
        return 1;

    std::string command = argv[1];

    if (command == "start")
    {
        if (isRunning())
        {
            pmensagem(RED, "O pwadmin já está em execução.");
            return 0;
        }
        char buffer[120];
        sprintf(buffer, "%s init 2>pwadmin.log &", argv[0]);
        system(buffer);
    }
    else if (command == "stop")
    {
        if (!isRunning())
        {
            pmensagem(RED, "O pwadmin não está em execução.");
            return 0;
        }
        std::ifstream pidFile(s.pidfile);
        pid_t pid;
        pidFile >> pid;
        kill(pid, SIGTERM);
        pmensagem(RED, "O pwadmin foi parado com sucesso!");
        unlink(s.pidfile.c_str());
    }
    else if (command == "init")
    {
        init();
    }
    else
    {
        pmensagem(RED, "Comando inválido!", true);
        pmensagem(WHITE, "Use <", false);
        pmensagem(GREEN, "start", false);
        pmensagem(WHITE, ">|<", false);
        pmensagem(GREEN, "stop", false);
        pmensagem(WHITE, ">", true);

        return 1;
    }
    return 0;
}