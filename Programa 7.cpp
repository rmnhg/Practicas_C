//Ramón Hernández García 2ºC
//Séptimo programa - C++
//Informática 2º Bachillerato
#include <stdio.h> //Definiciones de las macros, constantes y declaraciones de funciones de la biblioteca Standard de programación C.
#include <iostream> //Controla el flujo de entrada y salida de datos.
#include <math.h> //Contiene muchas funciones matemáticas.
#include <string> //Permite el uso de cadenas de texto en nuestro programa.

using namespace std; //Lo usamos para importar todas las funciones de la bibilioteca stl y, así, evitar introducir muchas funciones empezando por "std::".
int contador;
int numerouno;
int numerodos;

int main (){
    setlocale(LC_ALL, "Spanish"); //Permite utilizar caracteres españoles.
    cout << "Por favor, introduzca el primer numero del intervalo:\n";
    cin >> numerouno;
    cout << "Por favor, introduzca el último numero del intervalo:\n";
    cin >> numerodos;
    cout << "Su intervalo [" << numerouno << "," << numerodos << "] de números pares es el siguiente:" << endl;
    if ( numerouno % 2 == 0 ) { //Divido el primer número entre dos. Si el resto es cero el número es par.
        for (contador=numerouno; contador <= numerodos; contador+=2){
            cout << contador << ", ";
        }
    } else {
        numerouno = numerouno + 1; //Como el primer número es impar, le sumo una unidad para que el primer número sea par.
        for (contador=numerouno; contador <= numerodos; contador+=2){
            cout << contador << ", ";
        }
    }
}
