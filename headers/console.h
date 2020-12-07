#ifndef __CONSOLE_H__
#define __CONSOLE_H__
#include <string>
class Console
{
	public:
		Console();	
		void Clear();	
		std::string T_name, T_lastname, T_user, T_passwd, aux_passwd;
		auto MainMenu();
		void LoginMenu();
		void RetryLoginMenu();
		void RegistryMenu();
		void RetryRegistryMenu();
		char WelcomeMenu();
		~Console();
};
#endif
