/*24_Funciones7*/
/*Sobrecarga de funcuones es el hecho de poder tener varias funciones con el mismo 
nombre y con distinto numero de parametros de entrada*/
/******24 de oct 2022 Diego Marquez********/
#include<iostream>
using namespace std;
/*Aqui se declara la sobrecarga de la funcion suma,
mismo nombre diferente numero de parametros*/
int suma (int x, int b);
int suma (int x, int b,int c);
int suma (int x, int b,int c, int d);

int main()
{
	int n1=1, n2=2, n3=3, n4=4;
	cout << "Trabajamos con los numeros: " << n1 <<" , "<<n2<<" , ";
	cout <<n3<<","<<" y "<<n4<<endl;
	cout<<"La suma de los dos primeros: "<<suma(n1,n2)<<endl;
	cout<<"La suma de los tres primeros: "<<suma(n1,n2,n3)<<endl;
	cout<<"La suma de todos los valores: "<<suma(n1,n2,n3,n4)<<endl;
}

int suma(int a, int b, int c,int d)
{
	return a+b+c+d;
}
int suma(int a, int b)
{
	return a+b;
}
int suma(int a, int b, int c)
{
	return a+b+c;
}
