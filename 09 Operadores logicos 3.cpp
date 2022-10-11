/***09 Manejo de operadores logicos3******
*****11 de oct 2022 Diego Marquez********/
/*Ejercicio pedir dos palabras si son iguales imprimir "Coinciden"
si no, imprimir "Error de captura"*/
#include<iostream>
using namespace std;
int main()
{
	string c1,c2;
	cout<<"Escribe una primer palabra: ";
	cin>> c1;
	cout<<"Escribe una segunda palabra: ";
	cin>> c2;
	string v="Coinciden",f="Error de captura";
	cout<< endl <<((c1==c2)?v:f)<<endl;

return 0;
}
