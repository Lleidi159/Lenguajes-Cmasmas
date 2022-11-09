/***41 Funciones.cpp******
// Curso Lenguaje C++ 
// Funciones de clases
*****07 de nov 2022 Diego Marquez********/
#include<iostream>
using namespace std;

class LibroCalificaciones //por convencion las clases inician con 
//una mayuscula y cada palabra tambien inicia con mayuscula normalmente
//llamada nomenclatura de pascal
{
public:  //este es un especificador de acceso
	void mostrarMensaje() 
	{
		cout <<"Bienvenidos al Libro de Calificaciones!"<< endl;
	} //fin de la funcion meiembro mostrarMensaje
};//fin de la clase LibroCalificaciones debe terminar con ";"

int main()
{
	LibroCalificaciones miLibroCalificaciones; //crea un objeto 
	//partiendo del LibroCalificaciones llamado miLibroCalificaciones
	miLibroCalificaciones.mostrarMensaje();// llama a la funcion
	//mostrarMenaje del objeto separado por un . 
}
