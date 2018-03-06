//Ram�n Hern�ndez Garc�a 2�C
//S�ptimo programa - C++
//Inform�tica 2� Bachillerato
#include <stdio.h> //Definiciones de las macros, constantes y declaraciones de funciones de la biblioteca Standard de programaci�n C.
#include <iostream> //Controla el flujo de entrada y salida de datos.
#include <math.h> //Contiene muchas funciones matem�ticas.
#include <string> //Permite el uso de cadenas de texto en nuestro programa.

using namespace std; //Lo usamos para iportar todas las funciones de la bibilioteca stl y, as�, evitar introducir muchas funciones empezando por "std::".
int contador;
int numerouno;
int numerodos;

int main (){
    setlocale(LC_ALL, "Spanish"); //Permite utilizar caracteres espa�oles.
    cout << "Por favor, introduzca el primer numero del intervalo:\n";
    cin >> numerouno;
    cout << "Por favor, introduzca el �ltimo numero del intervalo:\n";
    cin >> numerodos;
    cout << "Su intervalo [" << numerouno << "," << numerodos << "] de n�meros impares es el siguiente:" << endl;
    if ( numerouno % 2 == 0 ) { //Divido el primer n�mero entre dos. Si el resto es cero el n�mero es par.
        numerouno = numerouno + 1; //Como el primer n�mero es par, le sumo una unidad para que el primer n�mero sea impar.
        for (contador=numerouno; contador <= numerodos; contador+=2){
            cout << contador << ", ";
        }
    } else { //El n�mero es impar, no le sumo nada.
        for (contador=numerouno; contador <= numerodos; contador+=2){
            cout << contador << ", ";
        }
    }
}
