#include <iostream>
#include <string>
#include "../headers/app.h"
App::App()
{

}

bool App::LoginCheck(std::string _User, std::string _Passwd)
{
	if(this->getUserName()==this->T_user and this->getPasswd()==this->T_passwd)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int App::Run()
{
	switch(this->MainMenu())
	{
		case '1':
			{
				this->Clear();
				this->LoginMenu();
				if(this->LoginCheck(this->T_user, this->T_passwd)==true)
				{
					this->Clear();
					if(this->WelcomeMenu()=='1')
					{
						this->Clear();
						this->MainMenu();
					}
					else
					{
						return 0;
					}

				}
				else
				{
					this->Clear();
					this->RetryLoginMenu();
					if(this->LoginCheck(this->T_user, this->T_passwd)==true)
				}
			}	
	}
	return 0;
}
App::~App()
{

}
