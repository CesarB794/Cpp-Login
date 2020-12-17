#ifndef __CONSOLE_H__
#define __CONSOLE_H__
#include <string>
class Console
{
	public:
		Console();	
		void Clear();	
		std::string T_name, T_lastname, T_user, T_passwd, aux_passwd;
		int MainMenu();
		void LoginMenu();
		void RetryLoginMenu();
		void RegistryMenu();
		void RetryRegistryMenu();
		int WelcomeMenu();
		int option;
		virtual ~Console();
};
#endif
