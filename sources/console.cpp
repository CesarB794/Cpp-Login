#include "../headers/console.h"
#include <cstdlib>
#include <iostream>
Console::Console()
{

}

void Console::Clear()
{
	#ifdef __WIN32
		system("cls");
	#else
		system("clear");
	#endif
}

void Console::RetryRegistryMenu()
{
	std::cout<<"*********************************"<<std::endl;
	std::cout<<"*         Registro              *"<<std::endl;
	std::cout<<"* Las contraseñas no coinciden! *"<<std::endl;
	std::cout<<"*-Constraseña: "; std::cin>>this->T_passwd;
	std::cout<<"*-Repita su contraseña: "; std::cin>>this->aux_passwd;
}

int Console::MainMenu()
{
	std::cout<<"***************************"<<std::endl; 
	std::cout<<"*   		Bienvenido   			*"<<std::endl;
	std::cout<<"*1-Ingresar.              *"<<std::endl;
	std::cout<<"*2-Registrarse.           *"<<std::endl;
	std::cout<<"*3-Salir.                 *"<<std::endl;
	std::cout<<"*                         *"<<std::endl;
	std::cout<<"*Opcion[1/2/3]: ";
	return std::stoi(std::to_string(std::cin.get()));
}

void Console::LoginMenu()
{
	std::cout<<"***************************"<<std::endl;
	std::cout<<"*        Ingreso          *"<<std::endl;
	std::cout<<"-Usuario: "; std::cin>>this->T_user;
	std::cout<<"-Constraseña: "; std::cin>>this->T_passwd;	
}

void Console::RegistryMenu()
{
	std::cout<<"****************************"<<std::endl;
	std::cout<<"*          Registro        *"<<std::endl;
	std::cout<<"*-Nombre: ";std::cin>>this->T_name;
	std::cout<<"*-Apellido: "; std::cin>>this->T_lastname;
	std::cout<<"*-Nombre de usuario: "; std::cin>>this->T_user;
	std::cout<<"*-Constraseña: "; std::cin>>this->T_passwd;
	std::cout<<"*-Repita su contraseña: "; std::cin>>this->aux_passwd;
	Clear();
	std::cout<<"****************************"<<std::endl;
	std::cout<<"* 		Registro Correcto.   *"<<std::endl;
	std::cout<<"-0-Volver.....              "<<std::cin.get();
	Clear();
	MainMenu();
}

int Console::WelcomeMenu()
{
	std::cout<<"****************************"<<std::endl;
	std::cout<<"*        BIENVENIDO        *"<<std::endl;
	std::cout<<"*                          *"<<std::endl; 
	std::cout<<"*1-Volver al menu principal."<<std::endl;
	std::cout<<"*0-Salir                    "<<std::endl;
	std::cout<<"Opcion[1/0]: ";
	return std::stoi(std::to_string(std::cin.get()));
}

Console::~Console()
{

}
