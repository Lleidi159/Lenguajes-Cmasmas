/***Manejo 11_Ciclo de while******
*****17 de oct 2022 Diego Marquez********/
/*Estructura while c++ */
#include<iostream>
using namespace std;
int main ()
{
	int i=0,r;
	cout<<"EScribe un numero para repetir la frase: ";
	cin>>r;
	cout<<"La frase se escribira al menos una vez aun y";
	cout<<" cuando el numero sea 0 o negativo "<<endl;
	do{
		i++;
		cout<<i<<" Esta es una frase a repetir: "<<endl;
	}while(i<r);
}
