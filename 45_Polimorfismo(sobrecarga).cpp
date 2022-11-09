/***45 Polimorfismo sobrecargado.cpp******
//Clases con sobrecarga de funciones (polimorfismo)
*****09 de nov 2022 Diego Marquez********/
#include<iostream>
using namespace std;

class Principal{
	public:
		void numero(int x) //funcion con un entero como parametro
		{
			cout <<"El valor de x es: " << x <<endl;
		}
		void numero(double x)//funcion que recibe un doble como parametro
		{
			cout <<"El valor de x es: " << x <<endl;
		}
		void numero(int x, int y)
		{
			cout <<"El valor de x es: " << x <<" y el valor de y es: "<< y <<endl;
		}
};

int main()
{
	Principal  elemento1,elemeto2;
	
	elemento1.numero(7);//Llamar a la primera funcion llamada numero
	elemento1.numero(3.1415);//Llamar a la segunda funcion,por ser valor flotante
	elemento1.numero(78.15,45.45);//Llamar a la tercera funcion llamda numero(por que es de enteros solo agarra la parte entera aunque se ponga decimal)
}
