/***Manejo de operadores logicos******
*****11 de oct 2022 Diego Marquez********/
#include<iostream>
using namespace std;
int main()
{
	bool p, s;
	cout<<"OPERADORES LOGICOS"<<endl;
	cout<<"Escribe un primer valor booleano (0-1): ";
	cin>> p;
	cout<<"Escribe un segundo valor booleano (0-1): ";
	cin>> s;
	cout<< "Los operadores capturados son: p= "<< p <<" s= "<< s <<endl;
	cout<<"OPERACIONES BASICAS: "<<endl;
    cout<< p <<" and " << s <<" = "<< (p and s)<<endl;
    cout<< p <<" or " << s <<" = "<< (p or s)<<endl;
    cout<< p <<" xor " << s <<" = "<< (p xor s)<<endl;
    cout<< " NOT s " << !s <<endl;
    cout<< " NOT p " << !p <<endl;
    string v="Verdadero", f="Falso";
    cout<< " Primero operador " <<(p?v:f) <<endl;
    cout<< " Segundo operador " <<(s?v:f) <<endl;

return 0;
}
