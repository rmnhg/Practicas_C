//Ramón Hernández García 2ºC
//Sexto programa - C++
//Informática 2º Bachillerato
#include <stdio.h> //Definiciones de las macros, constantes y declaraciones de funciones de la biblioteca Standard de programación C.
#include <iostream> //Controla el flujo de entrada y salida de datos.
#include <math.h> //Contiene muchas funciones matemáticas.
#include <string> //Permite el uso de cadenas de texto en nuestro programa.

using namespace std; //Lo usamos para importar todas las funciones de la bibilioteca stl y, así, evitar introducir muchas funciones empezando por "std::".
int numero;
int b;
int factorial;
int main (){
    setlocale(LC_ALL, "Spanish"); //Permite utilizar caracteres españoles.
    cout << "Por favor, introduzca un número para calcular su factorial:\n";
    cin >> numero;
    factorial=1;
    for (b=1 ; b<=numero ; b++) {
         factorial=b*factorial;
    }
    cout << "El factorial del número " << numero << " es " << factorial << ".";
}
