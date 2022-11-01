/***22_funciones5.cpp******
Funciones con pase de argumento por defecto
*****18 de oct 2022 Diego Marquez******/
#include<iostream>
using namespace std;
void multiplica(int n1=1,int n2=1);

int main()
{
	int a=3,b=5;
	cout << "Valores iniciales: " << a <<" , "<< b << endl;
	cout << "Funciones sin argumentos: " << multiplica() <<endl;
	cout << "Funciones con un argumentos: " << multiplica(a) <<endl;
	cout << "Funciones con dos argumentos: " << multiplica(a,b) <<endl;
}
int multiplica(int n1,int n2)
{
	return n1*n2;
}
