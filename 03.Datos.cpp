/***Practica para la captura de informacion C++******
*************05 de oct 2022 Diego Marquez*************/
#include<iostream>
using namespace std;
int main()
{
	string nombres,apellido1,apellido2,email,direccion,poblacion;
	int edad;
	long long telefono;
	cout<<"Escribe tus datos"<<endl;
	cout<<"Escribe tu nombre(s): "; getline(cin,nombres);
	cout<<"Escribe tu Primer apellido: "; getline(cin,apellido1);
	cout<<"Escribe tu Segundo apellido: "; getline(cin,apellido2);
	cout<<"Escribe tu email: "; getline(cin,email);
	cout<<"Escribe tu direccion: "; getline(cin,direccion);
	cout<<"Poblacion: "; getline(cin,poblacion);
	cout<<"Escribe tu edad: "; cin>>edad;
	cout<<"Escribe tu telefono: "; cin>>telefono;
	cout<<endl<<"Tus datos"<<endl;
	cout<<"Nombre: " <<nombres<<" "<<apellido1<<" "<<apellido2<<endl;
	cout<<"Edad: "<<edad<<endl;
	cout<<"Direccion: "<<direccion<<endl;
	cout<<"E-mail: "<<email<<endl;
	cout<<"Poblacion: "<<poblacion<<endl;
	cout<<"Telefono: "<<telefono<<endl;
	
return 0;
}
