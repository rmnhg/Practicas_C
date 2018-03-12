//Ramón Hernández García 2ºC
//Práctica 1 blog - C++
//Informática 2º Bachillerato
#include <stdio.h> //Definiciones de las macros, constantes y declaraciones de funciones de la biblioteca Standard de programación C.
#include <iostream> //Controla el flujo de entrada y salida de datos.
#include <math.h> //Contiene muchas funciones matemáticas.
#include <string> //Permite el uso de cadenas de texto en nuestro programa.

using namespace std; //Lo usamos para importar todas las funciones de la bibilioteca stl y, así, evitar introducir muchas funciones empezando por "std::".
int lado,perimetro,area;
char decision;

int main (){
    setlocale(LC_ALL, "Spanish"); //Permite utilizar caracteres españoles.
    cout << "Programa para calcular el perímetro y el área de un cuadrado.\n";
    cout << "Por favor, introduzca el lado del cuadrado:\n";
    cin >> lado;
    cout << "Por favor indíque si desea calcular  el perímetro (p o P) o el área (a o A) del cuadrado:\n";
    cin >> decision;
    switch (decision){
    case 'p': //Cuando la tecla es p.
        perimetro = 4 * lado;
        cout << "El perímetro de su cuadrado de lado " << lado << " es el siguiente: " << endl << perimetro;
    break;
    case 'P': //Cuando la tecla es P.
        perimetro = 4 * lado;
        cout << "El perímetro de su cuadrado de lado " << lado << " es el siguiente: " << endl << perimetro;
    break;
    case 'a': //Cuando la tecla es a.
        area = lado * lado;
        cout << "El área de su cuadrado de lado " << lado << " es el siguiente: " << endl << area;
    break;
    case 'A': //Cuando la tecla es A.
        area = lado * lado;
        cout << "El área de su cuadrado de lado " << lado << " es el siguiente: " << endl << area;
    break;
    //Y sino...
    default:
    cout << "Disculpe, no ha pulsado la tecla correcta.";
}
}
