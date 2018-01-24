#pragma once
#include<string>
using namespace std;
class Account
{
private:
	long id;
	string login;
	string password;
	bool admin;
	bool boss;
public:
	Account();
	~Account();
};

