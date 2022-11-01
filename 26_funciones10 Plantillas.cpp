/***26_funciones10 Plantillas.cpp******
Manejo de Plantillas para poder definir "Funciones" que manejen 
diferentes tipos de datos pero sin tener que definir muchas funciones sobrecargadas
*****25 de oct 2022 Diego Marquez********/
/*Estructura while c++ */
#include<iostream>
using namespace std;

template<class T>//la letra T es el nombre de la plantilla
T mayor(T a,T b);//declaramos la funcion prototipo de la plantilla 
                // pero como p tipo de datos ponemos T (plantilla)
int main()
{
	cout << "Mayor entre 10 y 12: " << mayor<int>(10,12) <<endl;
	cout << "Mayor entre 10.23 y 15.34: "<< mayor<double>(10.23,15.34) <<endl;
	cout << "Mayor entre r y m: "<< mayor<char>('r','m') <<endl;
	cout << "Mayor entre Martha y Marcos: "<< mayor<string>("Martha","Marcos") <<endl;
}

template <class T>
T mayor (T a,T b)
{
	if (a>b) return a;
	else return b;
}
