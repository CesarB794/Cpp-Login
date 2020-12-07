#include "../headers/user.h"
User::User()
{

}

void User::setName(std::string name)
{
	this->Name=name;
}

void User::setLastName(std::string last)
{
	this->LastName=last;
}

void User::setUserName(std::string user)
{
	this->UserName=user;
}

void User::setPasswd(std::string passwd)
{
	this->Passwd=passwd;
}

std::string User::getName()
{	
	return this->Name;
}

std::string User::getLastName()
{
	return this->LastName;
}

std::string User::getUserName()
{
	return this->UserName;
}

std::string User::getPasswd()
{
	return this->Passwd;
}


User::~User()
{

}
