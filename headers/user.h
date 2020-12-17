#ifndef __USER_H__
#define __USER_H__
#include <string>
class User
{
	protected:
		std::string Name;
		std::string LastName;
		std::string UserName;
		std::string Passwd;
	public:
		User();
		void setName(std::string);
		void setLastName(std::string);
		void setUserName(std::string);
		void setPasswd(std::string);
		std::string getName();
		std::string getLastName();
		std::string getUserName();
		std::string getPasswd();
		virtual ~User();
};
#endif
