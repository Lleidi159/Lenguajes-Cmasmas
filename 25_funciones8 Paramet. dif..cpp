/***25_funciones8 Paramet. dif.cpp******
Sobrecarga de funciones con parametros de diferente tipo
*****25 de oct 2022 Diego Marquez********/
/*Estructura while c++ */
#include<iostream>
using namespace std;

//definimos las funciones que llecaron sobrecarga
int mayor(int a, int b);
double mayor (double x, double y);
char mayor(char r, char s);
string mayor(string f, string g);

int main()
{
	cout << "Mayor entre 10 y 12: " << mayor(10,12) <<endl;
	cout << "Mayor entre 13.12 y 17.73: "<< mayor(13.12,17.73) <<endl;
	cout << "Mayor entre a y e: "<< mayor('a','e') <<endl;
	cout << "Mayor entre Carlos y Alejanro: "<< mayor("Carlos","Alejandro") <<endl;
}

int mayor(int a, int b)
{
	if(a>b)
	    return a;
	else
	    return b;
}
double mayor(double x, double y)
{
	if(x>y)
	    return x;
	else
	    return y;
}
char mayor(char r, char s)
{
	if(r>s)
	    return r;
	else
	    return s;
}
string mayor(string f, string g)
{
	if(f>g)
	    return f;
	else
	    return g;
}
