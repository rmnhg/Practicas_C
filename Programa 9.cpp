//Ramón Hernández García 2ºC
//Noveno programa - C++
//Informática 2º Bachillerato
#include <stdio.h> //Definiciones de las macros, constantes y declaraciones de funciones de la biblioteca Standard de programación C.
#include <iostream> //Controla el flujo de entrada y salida de datos.
#include <math.h> //Contiene muchas funciones matemáticas.
#include <string> //Permite el uso de cadenas de texto en nuestro programa.

using namespace std; //Lo usamos para iportar todas las funciones de la bibilioteca stl y, así, evitar introducir muchas funciones empezando por "std::".
int temperaturaC;
int temperaturaF;

int main (){
    setlocale(LC_ALL, "Spanish"); //Permite utilizar caracteres españoles.
    cout << "Por favor, introduzca su temperatura en grados centígrados para calcular su equivalencia en la escala Farenheit:\n";
    cin >> temperaturaC;
    temperaturaF= temperaturaC * 1.8000 + 32.00;
    cout << "El resultado es " << temperaturaF << ".";
}
