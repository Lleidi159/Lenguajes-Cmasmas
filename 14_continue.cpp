/***14_continue.cpp******
Permite continuar con la secuencia de un ciclo omitiendo un paso del mismo
*****17 de oct 2022 Diego Marquez********/
/*Estructura while c++ */
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout <<"Escribe un  numero: ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if (i%2==0)continue;
		cout << i << " - ";
	}
}
