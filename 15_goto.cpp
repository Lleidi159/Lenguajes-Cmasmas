/***15_goto.cpp******
go-to permite saltar a diferentes lineas del codigo, no es muy recomendable su uso,
pero existe y se puede utilizar de ser necesario
*****17 de oct 2022 Diego Marquez********/
/*Estructura while c++ */
#include<iostream>
using namespace std;
int main()
{
	cout << "Uso del Goto: Escribe s para salir "<< endl;
	char c='a';
	salto1:
		cin>>c;
		if (c=='s') goto salto2;
	cout << "Esto no es una s, Escribe s para salir "<<endl;
	goto salto1;
	salto2:
		cout << "Perfecto has escrito una s, programa terminado. "<< endl;
		return 1;
}
