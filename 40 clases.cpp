/***40 clases.cpp******
// Curso Lenguaje C++ 
// Programa: Demostraci�n del uso de una clase, manejando datos de una agenda
*****25 de oct 2022 Diego Marquez********/
#include<iostream>
#include<string.h>
using namespace std;

class Registro 
{ 
	// Por omisi�n esto es la secci�n privada 
		char nombre[50]; 
		char telefono[15]; 
	public: // Secci�n p�blica 
 		void Iniciar (void); 
 		void EntradaDatos (void); 
 		void SalidaDatos (void); 
} registro1;
 
// Programa principal 
int main(void) 
{ 
	Registro registro2; 
 	registro1.Iniciar(); 
 	registro2.Iniciar(); 
 	//registro2.EntradaDatos();
 	registro1.EntradaDatos(); 
 	registro2.EntradaDatos(); 
 	registro1.SalidaDatos(); 
 	registro2.SalidaDatos(); 
} 

// Funciones miembro de la clase Registro 
void Registro::Iniciar (void) 
{ 
	strcpy(nombre, ""); 
 	strcpy(telefono, ""); 
} 

void Registro::EntradaDatos (void) 
{ 
	cout << "\nNombre: "; 
 	cin >> nombre; 
 	cout << "Telefono: "; 
 	cin >> telefono; 
} 
void Registro::SalidaDatos (void) 
{ 
	cout << "\n\nNombre:\t\t" << nombre << "\n"; 
	cout << "Telefono:\t" << telefono << "\n"; 
} 
