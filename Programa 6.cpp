//Ram�n Hern�ndez Garc�a 2�C
//Sexto programa - C++
//Inform�tica 2� Bachillerato
#include <stdio.h> //Definiciones de las macros, constantes y declaraciones de funciones de la biblioteca Standard de programaci�n C.
#include <iostream> //Controla el flujo de entrada y salida de datos.
#include <math.h> //Contiene muchas funciones matem�ticas.
#include <string> //Permite el uso de cadenas de texto en nuestro programa.

using namespace std; //Lo usamos para iportar todas las funciones de la bibilioteca stl y, as�, evitar introducir muchas funciones empezando por "std::".
int numero;
int b;
int factorial;
int main (){
    setlocale(LC_ALL, "Spanish"); //Permite utilizar caracteres espa�oles.
    cout << "Por favor, introduzca un n�mero para calcular su factorial:\n";
    cin >> numero;
    factorial=1;
    for (b=1 ; b<=numero ; b++) {
         factorial=b*factorial;
    }
    cout << "El factorial del n�mero " << numero << " es " << factorial << ".";
}
