/***20_funciones3.cpp******
Funciones recusivas
*****18 de oct 2022 Diego Marquez******/
#include<iostream>
using namespace std;

long double factorial(long double n); //prototipo de la funcion (declarar la funcion)

int main()
{
	long double n,r;
	cout<<"Factorial: Escribe un numero para obtener su Factorial: ";
	cin>>n;
	r=factorial(n);
	cout << n <<" != " << r << endl;
}

long double factorial(long double n)
{
	if(n<0) return 0;
	else if (n>1)
	{ //5*4*3*2
		return n*factorial(n-1); //recusividad mientras n>1
	}
	return 1; //condicion para n==1 y n=0;
}
