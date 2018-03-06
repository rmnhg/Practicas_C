//Ramón Hernández García 2ºC
//Práctica 1 blog - C++
//Informática 2º Bachillerato
#include <stdio.h> //Definiciones de las macros, constantes y declaraciones de funciones de la biblioteca Standard de programación C.
#include <iostream> //Controla el flujo de entrada y salida de datos.
#include <math.h> //Contiene muchas funciones matemáticas.
#include <string> //Permite el uso de cadenas de texto en nuestro programa.
#define pi 3.14159265 //Número Pi aproximado

using namespace std; //Lo usamos para iportar todas las funciones de la bibilioteca stl y, así, evitar introducir muchas funciones empezando por "std::".
int radio,longitud,area;
char decision;

int main (){
    setlocale(LC_ALL, "Spanish"); //Permite utilizar caracteres españoles.
    cout << "Programa para calcular la longitud y el área de una circunferencia.\n";
    cout << "Por favor, introduzca el radio de la circunferencia:\n";
    cin >> radio;
    cout << "Por favor indíque si desea calcular la longitud (l o L) o el área (a o A) de la circunferencia:\n";
    cin >> decision;
    switch (decision){
    case 'l': //Cuando la tecla es l.
        longitud = 2 * pi * radio;
        cout << "La longitud de su circunferencia de radio " << radio << " es la siguiente: " << endl << longitud;
    break;
    case 'L': //Cuando la tecla es L.
        longitud = 2 * pi * radio;
        cout << "La longitud de su circunferencia de radio " << radio << " es la siguiente: " << endl << longitud;
    break;
    case 'a': //Cuando la tecla es a.
        area = pi * radio * radio;
        cout << "La longitud de su circunferencia de radio " << radio << " es la siguiente: " << endl << area;
    break;
    case 'A': //Cuando la tecla es A.
        area = pi * radio * radio;
        cout << "La longitud de su circunferencia de radio " << radio << " es la siguiente: " << endl << area;
    break;
    //Y sino...
    default:
    cout << "Disculpe, no ha pulsado la tecla correcta.";
}
}
