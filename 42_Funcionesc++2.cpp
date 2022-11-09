/***42 Funciones2.cpp******
// Curso Lenguaje C++ 
// Funciones de clases
*****07 de nov 2022 Diego Marquez********/
#include<iostream>
#include<string>
using namespace std;

class LibroCalificaciones //por convencion las clases inician con 
//una mayuscula y cada palabra tambien inicia con mayuscula normalmente
//llamada nomenclatura de pascal
{
public:  //este es un especificador de acceso
	void mostrarMensaje(string nombreCurso) 
	{
		cout <<"Bienvenidos al Libro de Calificaciones para\n"<<nombreCurso<<"!"<< endl;
	} //fin de la funcion meiembro mostrarMensaje
};//fin de la clase LibroCalificaciones debe twrminar con ";"

int main()
{
	string nombreDelCurso;
	LibroCalificaciones miLibroCalificaciones; //crea un objeto 
	//partiendo del LibroCalificaciones llamado miLibroCalificaciones
	cout<<"Escribe el nombre del curso: "<<endl;
	cin>> nombreDelCurso;
	//getline(cin,nombreDelCurso); //Lee el nombre del curso desde el teclado con espacios en blanco
	cout<<endl;
	miLibroCalificaciones.mostrarMensaje( nombreDelCurso);// llama a la funcion
	//mostrarMenaje del objeto separado por un . 
}
