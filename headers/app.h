#ifndef __APP_H__
#define __APP_H__
#include "../headers/user.h"
#include "../headers/console.h"
class App: public User, public Console
{
	public:
		App();
		int Run();
		bool LoginCheck(std::string, std::string);
		~App();
};
#endif
