/***Proyectro segundo parcial Lenguejes de progra 1.cpp****
*****05 de Nov 2022 Diego Marquez********/
// Juan Diego Maruqez Chaparro 359519
#include <iostream>
#include <conio.h>

using namespace std;

template <class T>
T suma(T a, T b);

string alternar(bool mayuscula = true){
    string resultado = "";
    char letra = getch();
    cout << letra << endl;
    if(letra == 32) return resultado;
    if(mayuscula == true) letra = toupper(letra);
    else letra = tolower(letra);
    resultado += letra;
    return resultado + alternar(!mayuscula);
}

void opcion1(){
    for(char caracter : alternar()){
        if(islower(caracter)) cout << char(toupper(caracter));
        else cout << char(tolower(caracter));
    }
    cout << endl;
}

void opcion2(){
    string caracteres = "";
    char caracter;
    while(1){
        cin >> caracter;
        if(isdigit(caracter)) break;
        caracteres += caracter;
    }
    cout << caracteres << endl;
}

void opcion3(){
    int a, b;
    cin >> a >> b;
    string resultado = (a && b) ? "verdadero" : "falso";
    cout << resultado << endl;
}

void opcion4(){
    int valores[10];
    for(int i=0; i<10; i++) cin >> valores[i];
    cout << valores[0] << " " << valores[1] << " " << valores[2] << " " << valores[3] << endl;
    cout << " " << valores[4] << " " << valores[5] << " " << valores[6] << endl;
    cout << "  " << valores[7] << " " << valores[8] << endl;
    cout << "   " << valores[9] << endl;
}

void opcion5(){
    char a, b;
    cin >> a >> b;
    cout << suma<char>(a, b) << endl;
    cout << suma<int>(a, b) << endl;
}


int main(){

    bool menu = true;
    int opcion;

    while(menu){
        cout << "1. Capturar letras alternadas en mayus y min mediante una funcion recursiva y las imprma en forma inversa, hasta que aparazca un espacio. " << endl;
        cout << "2. Capturar caracteres hasta que aparazca un numero imprima los caracteres. " << endl;
        cout << "3. Capturar 2 valores (0 o 1) y aplique el operador and con ellos e indique si la operacion es verdadera o falsa. " << endl;
        cout << "4. Capturar 10 valores e imprimalos en forma de triangulo inverso. " << endl;
        cout << "5. Capturar 2 caracteres, mediante una plantilla sumarlos, como enteros, y como caracteres. " << endl;
        cout << "6. Salir" << endl;

        cout << "Introduzca una opcion: ";
        cin >> opcion;

        switch(opcion){
            case 1: opcion1(); break;
            case 2: opcion2(); break;
            case 3: opcion3(); break;
            case 4: opcion4(); break;
            case 5: opcion5(); break;
            case 6: menu = false; break;
            default:cout << "Opcion invalida."<<endl;
        }
        cout << "Presione Enter para continuar." << endl;
        getch();
        system("cls");

    }

    return 0;
}

template <class T>
T suma (T a, T b){
    return a + b;
}
