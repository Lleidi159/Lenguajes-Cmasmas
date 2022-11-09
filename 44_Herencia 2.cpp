/***44 Herencia2.cpp******
// Herencia de clases
// herencia.cpp
*****08 de nov 2022 Diego Marquez********/


#include<iostream>
using namespace std;

class Persona{
	protected:
		char nombre[40];
		int edad;
	public:
		void cargarDatosPersonales();
		void imprimirDatosPersonales();
};

class Empleado: public Persona
{
	private:
		float sueldo;
	public:
		void cargarSueldo();
		void imprimirSueldo();	
};

void Persona::cargarDatosPersonales()// el void es por que no se esperan datos de vuelta 
{
	cout << "Ingrese nombre: ";
	cin.getline(nombre,40);
	cout<< "Ingrese la edad:";
	cin>> edad;
	cin.get();
}
void Persona::imprimirDatosPersonales(){
	cout << "Nombre: " << nombre << endl;
	cout << "Edad: " << edad << endl;
}
void Empleado::cargarSueldo(){
	cout << "Ingrese el sueldo: ";
	cin >> sueldo;
}
void Empleado::imprimirSueldo(){
	cout << "El sueldo es: " << sueldo << "\n";
}
main()
{
	Persona persona1;
	persona1.cargarDatosPersonales();
	persona1.imprimirDatosPersonales();
	
	Empleado empleado1;
	empleado1.cargarDatosPersonales();
	empleado1.cargarSueldo();
	empleado1.imprimirDatosPersonales();
	empleado1.imprimirSueldo();
}
