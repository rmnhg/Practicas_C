//Ram�n Hern�ndez Garc�a 2�C
//Cuarto programa - C++
//Inform�tica 2� Bachillerato
#include <stdio.h> //Definiciones de las macros, constantes y declaraciones de funciones de la biblioteca Standard de programaci�n C.
#include <iostream> //Controla el flujo de entrada y salida de datos.
#include <math.h> //Contiene muchas funciones matem�ticas.
#include <string> //Permite el uso de cadenas de texto en nuestro programa.

using namespace std; //Lo usamos para importar todas las funciones de la bibilioteca stl y, as�, evitar introducir muchas funciones empezando por "std::".
char letra; //Voy a coger una letra.

int main() {
    setlocale(LC_ALL, "Spanish"); //Permite utilizar caracteres espa�oles.
	cout << "Buenos d�as. Por favor, introduzca una letra.\nYo le dir� si es consonante o vocal: ";
	cin>>letra;
    switch (letra){
    case 'a': //Cuando la letra es a.
    cout << "Esto es una vocal." << endl;
    break;
    case 'A': //Cuando la letra es A.
    cout << "Esto es una vocal." << endl;
    break;
    case 'e': //Cuando la letra es e.
    cout << "Esto es una vocal." << endl;
    break;
    case 'E': //Cuando la letra es E.
    cout << "Esto es una vocal." << endl;
    break;
    case 'i': //Cuando la letra es i.
    cout << "Esto es una vocal." << endl;
    break;
    case 'I': //Cuando la letra es I.
    cout << "Esto es una vocal." << endl;
    break;
    case 'o': //Cuando la letra es o.
    cout << "Esto es una vocal." << endl;
    break;
    case 'O': //Cuando la letra es O.
    cout << "Esto es una vocal." << endl;
    break;
    case 'u': //Cuando la letra es u.
    cout << "Esto es una vocal." << endl;
    break;
    case 'U': //Cuando la letra es U.
    cout << "Esto es una vocal." << endl;
    break;
    //Y sino...
    default:
    cout << "Ha introducido una consonante."<<endl;
}
}
