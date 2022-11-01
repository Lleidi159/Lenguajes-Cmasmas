/***19_funciones2.cpp******
Funciones con declaracion de prototipos
*****18 de oct 2022 Diego Marquez******/
#include<iostream>
using namespace std;
float suma(float a, float b); //prototipo de la funcion (declarar la funcion)
int main()
{
	float n1,n2,n3;
	cout<<"Escribe dos valores: ";
	cin>>n1>>n2;
	n3=suma(n1,n2);
	cout << "El resulatdo de la suma es: " << n3 << endl;
}

float suma(float a, float b)
{
	float c=a+b;
	return c;
}
