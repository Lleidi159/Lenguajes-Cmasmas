/***Capturar un dato por teclado e imprimirlo C++******
*************05 de oct 2022 Diego Marquez*************/
#include<iostream>
using namespace std;
int main()
{
	string nombre; //decalracion de variable en cadena
	cout << "Escribe tu nombre: ";
	//cin >> nombre; //lectura de teclado
	getline(cin,nombre); // Es para capturar todo lo que se ingrese por teclado independientemente del tamaño de oracion
	cout<<"Hola "<<nombre<<endl;
	
return 0;
}
