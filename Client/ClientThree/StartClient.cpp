#include "pch.h"
//_________________________________________________________________________________________________________ Network Part
#pragma comment(lib, "ws2_32.lib")
#include <WinSock2.h>
#pragma warning(disable: 4996)
//_________________________________________________________________________________________________________ Network Part
#include "DataAboutServer.h"
#include "IPort.h"
#include "Registration.h"
#include "Chat.h"

using namespace System;
using namespace System::Windows::Forms;
void ClientHandler() {
	int msg_size;
	while (true)
	{
		recv(Connection, (char*)&msg_size, sizeof(int), NULL);
		char* msg = new char[msg_size + 1];
		msg[msg_size] = '\0';
		recv(Connection, msg, msg_size, NULL);
		message = (string)msg;
		delete[] msg;
	}
}
void ServerStart() {
	WSADATA wsaData;
	WORD DLLVersion = MAKEWORD(2, 2);
	int res = WSAStartup(DLLVersion, &wsaData);
	if (res != 0)
	{
		MessageBox::Show("Woops, something goes wrong!", "Error!");
		return;
	}
	SOCKADDR_IN addr;
	addr.sin_addr.s_addr = inet_addr(ip.c_str());
	addr.sin_port = htons(port_con);
	addr.sin_family = AF_INET;
	Connection = socket(AF_INET, SOCK_STREAM, NULL);

	CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)ClientHandler, NULL, NULL, NULL);
	res = connect(Connection, (SOCKADDR*)&addr, sizeof(addr));
	if ( res != 0)
	{
		MessageBox::Show("Failed connection", "Error!");
		Application::Exit();
	}
	else
	{
		//________________________________________________________________________________________ Start Inputing Login and Pass
		ClientThree::Registration reg;
		Application::Run(% reg);
		//________________________________________________________________________________________ Start Inputing Login and Pass
		if (registration_key)
		{
			ClientThree::Chat chat;
			Application::Run(% chat);
		}
	}

}
[STAThreadAttribute]
int main(cli::array<String^>^ args) {

	
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	//________________________________________________________________________________________ Start Inputing IP and Port Form
	ClientThree::IPort iport;
	Application::Run(% iport);
	//________________________________________________________________________________________ Start Inputing IP and Port Form

	ServerStart();

	return 0;
}