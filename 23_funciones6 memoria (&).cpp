/***23_funciones6 memoria (&).cpp******
Es cuando se modifican los valores ubicados en memoria (&) por lo que no es necesario
regresar nada ya que los valores se actualizan automaticamente.
*****25 de oct 2022 Diego Marquez********/
/*Estructura while c++ */
#include<iostream>
using namespace std;
void operador(int x,int y, int& s, int& r,int& m);

int main()
{
	int a,b,mult,resta,suma;
	cout<<"Escribe dos numeros: ";
	cin>> a >> b;
	operador(a,b,suma,resta,mult);
	cout << "Los numeors iniciales son: " << a << " y " << b<<endl;
	cout << "La suma de estos valores es: "<< suma <<endl;
	cout << "La resta es: "<< resta <<endl;
	cout << "La multiplicacion es: "<< mult <<endl;	
}

void operador(int x,int y,int& s,int& r,int& m)
{
	m= x * y;
	r= x - y;
	s= x + y;
}
