/***Manejo de operadores aritmaticos******
*****11 de oct 2022 Diego Marquez********/
#include<iostream>
using namespace std;
int main()
{
	cout<<"Operadores Aritmeticos"<<endl;
	int a, b, c;
	cout<<"Escribe un numero entero: ";
	cin>> a;
	cout<<"Escribe otro numero entero: ";
	cin>> b;
	
	//Operdores basicos en c++
	cout<<"Suma: "<< a <<" + "<< b <<" = "<< a+b <<endl;
	cout<<"Resta: "<< a <<" - "<< b <<" = "<< a-b <<endl;
	cout<<"Multiplicacion: "<< a <<" * "<< b <<" = "<< a*b <<endl;
	cout<<"Division: "<< a <<" / "<< b <<" = "<< a/b <<endl;
	cout<<"Modulo: "<< a <<" % "<< b <<" = "<< a%b <<endl;
	/*Operdadores de asignacion compuesta para no perder el valor de los valores
	iniciales los copiamos en una nueva variable*/
	c=a; c+=b; cout<< " a += b ; a= "<<c << endl; //a=a+b
	c=a; c-=b; cout<< " a -= b ; a= "<<c << endl; //a=a-b
	c=a; c*=b; cout<< " a *= b ; a= "<<c << endl; //a=a*b
	c=a; c/=b; cout<< " a /= b ; a= "<<c << endl; //a=a/b
	c=a; c%=b; cout<< " a %= b ; a= "<<c << endl; //a=a%b
	
	/*Incremento  y decremento*/
	c=a; cout << "++a * b= "<< ++c * b <<" ;a = "<< c << endl; //pre incremneto
	c=a; cout << "a++ * b= "<< c++ * b <<" ;a = "<< c << endl; //post incremneto
	c=a; cout << "--a * b= "<< --c * b <<" ;a = "<< c << endl; //pre incremneto
	c=a; cout << "a-- * b= "<< c-- * b <<" ;a = "<< c << endl; //post incremneto

return 0;
}
