//Ram�n Hern�ndez Garc�a 2�C
//Pr�ctica 1 blog - C++
//Inform�tica 2� Bachillerato
#include <stdio.h> //Definiciones de las macros, constantes y declaraciones de funciones de la biblioteca Standard de programaci�n C.
#include <iostream> //Controla el flujo de entrada y salida de datos.
#include <math.h> //Contiene muchas funciones matem�ticas.
#include <string> //Permite el uso de cadenas de texto en nuestro programa.
#define pi 3.14159265 //N�mero Pi aproximado

using namespace std; //Lo usamos para importar todas las funciones de la bibilioteca stl y, as�, evitar introducir muchas funciones empezando por "std::".
float radio,longitud,area;
char decision;

int main (){
    setlocale(LC_ALL, "Spanish"); //Permite utilizar caracteres espa�oles.
    cout << "Programa para calcular la longitud y el �rea de un c�rculo\n";
    cout << "Por favor, introduzca el radio de la c�rculo:\n";
    cin >> radio;
    cout << "Por favor ind�que si desea calcular la longitud (l o L) o el �rea (a o A) de la c�rculo:\n";
    cin >> decision;
    switch (decision){
    case 'l': //Cuando la tecla es l.
        longitud = 2 * pi * radio;
        cout << "La longitud de su c�rculo de radio " << radio << " es la siguiente: " << endl << longitud;
    break;
    case 'L': //Cuando la tecla es L.
        longitud = 2 * pi * radio;
        cout << "La longitud de su c�rculo de radio " << radio << " es la siguiente: " << endl << longitud;
    break;
    case 'a': //Cuando la tecla es a.
        area = pi * radio * radio;
        cout << "El �rea de su c�rculo de radio " << radio << " es el siguiente: " << endl << area;
    break;
    case 'A': //Cuando la tecla es A.
        area = pi * radio * radio;
        cout << "El �rea de su c�rculo de radio " << radio << " es el siguiente: " << endl << area;
    break;
    //Y sino...
    default:
    cout << "Disculpe, no ha pulsado la tecla correcta.";
}
}
