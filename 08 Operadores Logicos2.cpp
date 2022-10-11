/***08 Manejo de operadores logicos2******
*****11 de oct 2022 Diego Marquez********/
/*Ejercicio pedir un numero entre 10 y 20 si cumple con la condicion imprimir: tu numero estaba
bien escrito, en caso contario que imprima tu numero esta mal escrito*/
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	int p=10,s=20;
	cout<<"Escribe un valor: ";
	cin>> a;
	bool r= a>=10 && a<=20;
    string v= "Tu numero esta bien escito";
    string f= "Tu numero esta mal escito";
    cout<<(r?v:f)<<endl;
	
return 0;
}
