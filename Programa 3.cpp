//Ram�n Hern�ndez Garc�a 2�C
//Tercer programa - C++
//Inform�tica 2� Bachillerato
#include <stdio.h> //Definiciones de las macros, constantes y declaraciones de funciones de la biblioteca Standard de programaci�n C.
#include <iostream> //Controla el flujo de entrada y salida de datos.
#include <math.h> //Contiene muchas funciones matem�ticas.
#include <string> //Permite el uso de cadenas de texto en nuestro programa.

using namespace std; //Lo usamos para importar todas las funciones de la bibilioteca stl y, as�, evitar introducir muchas funciones empezando por "std::".
int edad_persona;
string nombre_persona;

int main() {
    setlocale(LC_ALL, "Spanish"); //Permite utilizar caracteres espa�oles.
	cout<< "Por favor, introduza su nombre:\n";
	cin >> nombre_persona; //Registro el nombre de la persona
    cout<< "Por favor, introduzca su edad:\n"; //Pregunto la edad
    cin >> edad_persona; //Registro la edad
    if (edad_persona<18) {
    cout<< "Lo sentimos " << nombre_persona << ", no podemos mostrarle este contenido. �Vuelva con 18 a�os!";
    } else {
    cout<<"\n�Bienvenido al casino! " << nombre_persona;
    return 0 ; //Le devuelvo una constante a la actividad
    }
}
