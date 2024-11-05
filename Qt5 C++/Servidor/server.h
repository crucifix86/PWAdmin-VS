#include <iostream>
#include <fstream>
#include <cstring>
#include <thread>
#include <netinet/in.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <vector>
#include <cstdlib>
#include "GNET/OctetsStream.h"
#include "cmd.h"

using namespace std;
using namespace GNET;

OctetsStream processRequest(vector<uint8_t> protocol)
{
	OctetsStream os(protocol);
	cout << bytesToHexString(os.data) << endl;
	int key, opcode, size, retcode;
	key = os.uncompact_uint32();
	opcode = os.uncompact_uint32();
	size = os.uncompact_uint32();
	if (key != 501350)
		return OctetsStream();
	cout << "OPCODE: " << opcode << " Size: " << size << endl;
	switch (opcode)
	{
	case opGMGetGameAttri:
	{
		OctetsStream res;
		try
		{
			OctetsStream arg;
			arg.writeName("");
			arg.Encode(opGMGetGameAttri);
			res = arg.SendTCP(Session::getInstance().gdeliveryd_ip, Session::getInstance().gprovider_port);
			cout << bytesToHexString(res.data) << endl;
		}
		catch (exception &e)
		{
			printf(e.what());
		}
		return res;
	}
	case opGMSetGameAttri:
	{	
		uint8_t attribute = os.readInt8();
		uint8_t value = os.readInt8();
		OctetsStream arg;
		GMSetGameAttributes attr;
		attr.retcode = -1;
		attr.gmroleid = 32;
		attr.localsid = -1;
		attr.attribute = attribute;
		attr.count = 1;
		attr.value = value;
		attr.marshal(arg);
		arg.Encode(opGMSetGameAttri);
		arg.SendTCP(Session::getInstance().gdeliveryd_ip, Session::getInstance().gdeliveryd_port);
	
		return OctetsStream();
	}
	case opChatBroadcast:
	{
		auto value = os.readBytes(0, size);
		SendChatBroadcast(value);
		return OctetsStream();
	}
	case opAutoLockGet:
	{
		auto value = os.readBytes(0, size);
		OctetsStream newos(value);
		newos.Encode(opAutoLockGet);
		auto res = newos.SendTCP(Session::getInstance().gamedbd_ip, Session::getInstance().gamedbd_port, true);
		cout << bytesToHexString(res.data) << endl;
		return res;
	}
	case opAutoLockSet:
	{
		auto value = os.readBytes(0, size);
		AutoLockSet(value);
		return OctetsStream();
	}
	case opGetUserRoles:
	{
		auto value = os.readBytes(0, size);
		OctetsStream newos(value);
		newos.Encode(opGetUserRoles);
		auto res = newos.SendTCP(Session::getInstance().gamedbd_ip, Session::getInstance().gamedbd_port, true);
		cout << bytesToHexString(res.data) << endl;
		return res;
	}
	case opGetRole:
	{
		auto value = os.readBytes(0, size);
		OctetsStream nos(value);
		nos.Encode(opGetRole);
		auto res = nos.SendTCP(Session::getInstance().gamedbd_ip, Session::getInstance().gamedbd_port);
		cout << bytesToHexString(res.data) << endl;
		return res;
	}
	case opGetRoleData:
	{
		auto value = os.readBytes(0, size);
		OctetsStream nos(value);
		nos.Encode(opGetRoleData);
		auto res = nos.SendTCP(Session::getInstance().gamedbd_ip, Session::getInstance().gamedbd_port);
		cout << bytesToHexString(res.data) << endl;
		return res;
	}
	case opDBGetConsumeInfos:
	{
		auto value = os.readBytes(0, size);
		OctetsStream nos(value);
		nos.Encode(opDBGetConsumeInfos);
		auto res = nos.SendTCP(Session::getInstance().gamedbd_ip, Session::getInstance().gamedbd_port);
		cout << bytesToHexString(res.data) << endl;
		return res;
	}
	case opGetFactionDetail:
	{
		auto value = os.readBytes(0, size);
		OctetsStream nos(value);
		nos.Encode(opGetFactionDetail);
		auto res = nos.SendTCP(Session::getInstance().gamedbd_ip, Session::getInstance().gamedbd_port);
		cout << bytesToHexString(res.data) << endl;
		return res;
	}
	case opPutRoleData:
	{
		auto value = os.readBytes(0, size);
		OctetsStream nos(value);
		nos.Encode(opPutRoleData);
		nos.SendTCP(Session::getInstance().gamedbd_ip, Session::getInstance().gamedbd_port, false);
		return OctetsStream();
	}	
	case opGMListOnlineUser:
	{
		auto value = os.readBytes(0, size);
		OctetsStream nos(value);
    	nos.Encode(opGMListOnlineUser);
		auto res = nos.SendTCP(Session::getInstance().gdeliveryd_ip, Session::getInstance().gdeliveryd_port);
		cout << bytesToHexString(res.data) << endl;
		return res;
	}
	case 10:
	{
		OctetsStream res;
		auto mem = GetMemory();
		mem.marshal(res);
		res.Encode(10);
		return res;
	}
	case 11:
	{
		OctetsStream res;
		auto proc = GetProcessesConfig();
		auto ps = GetMapProcesses();
		uint32_t size = proc.size() + ps.size();
		res.compact_uint32(size);
		for (auto p : proc)
		{
			GetProcessPidMemCpu(p);
			p.marshal(res);
		}
		for (auto p : ps)
		{
			p.marshal(res);
		}
		res.Encode(11);
		cout << bytesToHexString(res.data) << endl;
		return res;
	}
	case 12:
	{
		OctetsStream res;
		auto instances = ReadInstances();
		uint32_t size = instances.size();
		res.compact_uint32(size);
		for (auto i : instances)
		{
			i.marshal(res);
		}
		res.Encode(12);
		cout << bytesToHexString(res.data) << endl;
		return res;
	}
	case 13:
	{
		auto lsize = os.uncompact_uint32();
		for (int i = 0; i < lsize; i++)
		{
			string str = os.readString();
			int status = system(str.c_str());
			if (status == -1)
			{
				pmensagem(RED, "Erro ao executar mensagem: ", false);
				pmensagem(RED, str);
			}
			else{
				pmensagem(GREEN, "Mensagem executada: ", false);
				pmensagem(GREEN, str);
			}
			// std::this_thread::sleep_for(std::chrono::milliseconds(200));
			if (str.find("LD_PRELOAD") != string::npos)
				system("unset LD_PRELOAD");
		}
		return OctetsStream();
	}
	case 14:
	{
		OctetsStream res;
		res.writeName(Session::getInstance().servname);
		res.writeName(Session::getInstance().password);
		res << Session::getInstance().port;
		res.writeName(Session::getInstance().homepath);
		res.writeName(Session::getInstance().gs_name);
		res.writeName(Session::getInstance().gs_conf_path);
		res.writeName(Session::getInstance().gs_path);
		res << Session::getInstance().aid;
		res << Session::getInstance().zoneid;
		res << Session::getInstance().servid;
		res.writeName(Session::getInstance().default_icon);
		res << Session::getInstance().log_row_count;
		res.writeName(Session::getInstance().logpath);
		res << Session::getInstance().ServerVersion;
		res.writeName(Session::getInstance().pidfile);
		res << Session::getInstance().PauseStartInstanceFixed;
		res << Session::getInstance().PauseStartPerInstance;
		res << Session::getInstance().MaxChatRow;
		res << Session::getInstance().MaxFormatLogRow;
		res << Session::getInstance().MaxWorld2LogRow;
		res << Session::getInstance().AuthDType;
		res.writeName(Session::getInstance().ShellAdd);
		res.writeName(Session::getInstance().GameBackupPath);
		res.writeName(Session::getInstance().MysqlBackupPath);
		res << Session::getInstance().MysqlBackupType;
		res.writeName(Session::getInstance().mysql_user);
		res.writeName(Session::getInstance().mysql_pass);
		res << Session::getInstance().mysql_port;
		res.writeName(Session::getInstance().mysql_base);
		res.writeName(Session::getInstance().mysql_host);
		res.writeName(Session::getInstance().gdeliveryd_ip);
		res << Session::getInstance().gdeliveryd_port;
		res << Session::getInstance().gprovider_port;
		res.writeName(Session::getInstance().gamedbd_ip);
		res << Session::getInstance().gamedbd_port;
		res.writeName(Session::getInstance().uniquenamed_ip);
		res << Session::getInstance().uniquenamed_port;
		res.Encode(14);
		cout << bytesToHexString(res.data) << endl;
		return res;
	}
	case 15:
	{
		OctetsStream res;
		return res;
	}
	case 16:
	{
		auto lsize = os.uncompact_uint32();
		OctetsStream res;
		for (int i = 0; i < lsize; i++)
		{
			string str = os.readString();
			cout << "COMANDO EXECUTADO: " << str<<endl;
			if (str.find("auth") != string::npos)
			{
				vector<GM> gms = GetGMCount(str.c_str());
				res.compact_uint32(gms.size());
				for (auto gm : gms)
				{
					res << gm.id;
					res.writeName(gm.name);
					res << gm.rules;
				}
			}
			else
				res << GetUserCount(str.c_str());
		}
		res.Encode(16);
		cout << bytesToHexString(res.data) << endl;
		return res;
	}
	case 17:
	{
		OctetsStream res;
		string sql = os.readString();
		cout << "SQL: " << sql << endl;
		auto users = GetUserList(sql.c_str());
		res.compact_uint32(users.size());
		for (auto user : users)
		{
			user.marshal(res);
		}
		res.Encode(17);
		cout << bytesToHexString(res.data) << endl;
		return res;
	}
	case 18:
	{
		OctetsStream res;
		string sql = os.readString();
		cout << "SQL: " << sql << endl;
		auto privileges = GetGMPrivileges(sql.c_str());
		res.compact_uint32(privileges.size());
		for (auto priv : privileges)
		{
			res << priv;
		}
		res.Encode(18);
		cout << bytesToHexString(res.data) << endl;
		return res;
	}
	default:
		return OctetsStream();
	}
}

void clientHandler(int client_sock, char *ip)
{
	char buffer[65536];
	std::ofstream logFile("pwadmin.log", std::ios::app);

	while (true)
	{
		memset(buffer, 0, sizeof(buffer));
		ssize_t n = read(client_sock, buffer, sizeof(buffer) - 1);

		if (n < 0)
		{
			pmensagem(RED, "Erro na leitura do socket.");
			break;
		}
		else if (n == 0)
		{
			// Cliente desconectou
			break;
		}

		vector<uint8_t> vec(buffer, buffer + n);
		logFile << "Cliente [" << ip << "] enviou: " << bytesToHexString(vec) << std::endl;

		OctetsStream response = processRequest(vec);
		pmensagem(GREEN, "RESPOSTA:");
		pmensagem(YELLOW, bytesToHexString(response.data));
		write(client_sock, response.data.data(), response.data.size());
	}

	close(client_sock);
}

class ServerSocket
{
public:
	ServerSocket(int port) : sockfd(socket(AF_INET, SOCK_STREAM, 0)), port(port)
	{
		if (sockfd < 0)
		{
			throw std::runtime_error("Erro ao abrir socket");
		}
	}

	~ServerSocket()
	{
		if (sockfd >= 0)
		{
			close(sockfd);
		}
	}

	void start()
	{
		struct sockaddr_in server_addr
		{
		};
		server_addr.sin_family = AF_INET;
		server_addr.sin_addr.s_addr = INADDR_ANY;
		server_addr.sin_port = htons(port);

		if (bind(sockfd, reinterpret_cast<struct sockaddr *>(&server_addr), sizeof(server_addr)) < 0)
		{
			throw std::runtime_error("Erro ao vincular porta");
		}

		listen(sockfd, 10);
		acceptConnections();
	}

private:
	int sockfd;
	int port;

	void acceptConnections()
	{
		std::ofstream logFile("pwadmin.log", std::ios::app);

		while (true)
		{
			struct sockaddr_in client_addr
			{
			};
			socklen_t clilen = sizeof(client_addr);
			int newsockfd = accept(sockfd, reinterpret_cast<struct sockaddr *>(&client_addr), &clilen);

			if (newsockfd < 0)
			{
				std::cerr << "Erro ao aceitar conexão" << std::endl;
				continue;
			}

			char *client_ip = inet_ntoa(client_addr.sin_addr);
			logFile << "Conexão recebida de: " << client_ip << std::endl;

			std::thread(clientHandler, newsockfd, client_ip).detach();
		}
	}
};