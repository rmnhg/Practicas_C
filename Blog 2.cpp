//Ram�n Hern�ndez Garc�a 2�C
//Pr�ctica 1 blog - C++
//Inform�tica 2� Bachillerato
#include <stdio.h> //Definiciones de las macros, constantes y declaraciones de funciones de la biblioteca Standard de programaci�n C.
#include <iostream> //Controla el flujo de entrada y salida de datos.
#include <math.h> //Contiene muchas funciones matem�ticas.
#include <string> //Permite el uso de cadenas de texto en nuestro programa.

using namespace std; //Lo usamos para importar todas las funciones de la bibilioteca stl y, as�, evitar introducir muchas funciones empezando por "std::".
int lado,perimetro,area;
char decision;

int main (){
    setlocale(LC_ALL, "Spanish"); //Permite utilizar caracteres espa�oles.
    cout << "Programa para calcular el per�metro y el �rea de un cuadrado.\n";
    cout << "Por favor, introduzca el lado del cuadrado:\n";
    cin >> lado;
    cout << "Por favor ind�que si desea calcular  el per�metro (p o P) o el �rea (a o A) del cuadrado:\n";
    cin >> decision;
    switch (decision){
    case 'p': //Cuando la tecla es p.
        perimetro = 4 * lado;
        cout << "El per�metro de su cuadrado de lado " << lado << " es el siguiente: " << endl << perimetro;
    break;
    case 'P': //Cuando la tecla es P.
        perimetro = 4 * lado;
        cout << "El per�metro de su cuadrado de lado " << lado << " es el siguiente: " << endl << perimetro;
    break;
    case 'a': //Cuando la tecla es a.
        area = lado * lado;
        cout << "El �rea de su cuadrado de lado " << lado << " es el siguiente: " << endl << area;
    break;
    case 'A': //Cuando la tecla es A.
        area = lado * lado;
        cout << "El �rea de su cuadrado de lado " << lado << " es el siguiente: " << endl << area;
    break;
    //Y sino...
    default:
    cout << "Disculpe, no ha pulsado la tecla correcta.";
}
}
