//Ramón Hernández García 2ºC
//Segundo programa - C++
//Informática 2º Bachillerato
#include <stdio.h> //Definiciones de las macros, constantes y declaraciones de funciones de la biblioteca Standard de programación C.
#include <iostream> //Controla el flujo de entrada y salida de datos.
#include <math.h> //Contiene muchas funciones matemáticas.
#include <string> //Permite el uso de cadenas de texto en nuestro programa.

using namespace std; //Lo usamos para iportar todas las funciones de la bibilioteca stl y, así, evitar introducir muchas funciones empezando por "std::".
string nombre_persona;

int main() {
    setlocale(LC_ALL, "Spanish"); //Permite utilizar caracteres españoles.
    cout<< "Por favor, inserte su nombre:"; //Pregunto el nombre
    cin >> nombre_persona; //Registro el nombre
    cout<<"Hola "  << nombre_persona << endl << "¿Qué tal estás?"; //Saludo a la persona
    return 0 ; //Le devuelvo una constante a la actividad
}
