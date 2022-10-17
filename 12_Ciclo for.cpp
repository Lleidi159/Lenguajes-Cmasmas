/***12_Ciclo for******
*****17 de oct 2022 Diego Marquez********/
/*Estructura while c++ */
#include<iostream>
using namespace std;
int main()
{
	cout<<"Tablas de multiplicar" << endl;
	int i,t;
	cout<<"Que tabla de multiplicar quieres? (del 1 al 10):  ";
	cin>>t;
	if(t>1 and t<=10)
	{
		for(int i=1; i<=10; i++)
		{
			cout<< t <<" x " << i << " = " <<t*1 << endl;
		}
	}
	else 
	{
		cout<<"Error: tu numero no esta entre 1 y 10 ";
	}
}
