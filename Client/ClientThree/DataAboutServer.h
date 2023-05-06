#pragma once
#pragma comment (lib, "ws2_32.lib")
#include <WinSock2.h>
#include <string>
#include <msclr/marshal_cppstd.h>
using namespace std;
SOCKET Connection;
string message;
string ip;
u_int port_con;
bool registration_key;
string login;
string password;
