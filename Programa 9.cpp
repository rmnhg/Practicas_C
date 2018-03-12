//Ram�n Hern�ndez Garc�a 2�C
//Noveno programa - C++
//Inform�tica 2� Bachillerato
#include <stdio.h> //Definiciones de las macros, constantes y declaraciones de funciones de la biblioteca Standard de programaci�n C.
#include <iostream> //Controla el flujo de entrada y salida de datos.
#include <math.h> //Contiene muchas funciones matem�ticas.
#include <string> //Permite el uso de cadenas de texto en nuestro programa.

using namespace std; //Lo usamos para importar todas las funciones de la bibilioteca stl y, as�, evitar introducir muchas funciones empezando por "std::".
int temperaturaC;
int temperaturaF;
int decision;

int main (){
    setlocale(LC_ALL, "Spanish"); //Permite utilizar caracteres espa�oles.
	cout<<"Seleccione la operaci�n que desea realizar:\n"
	<<"1. Grados cent�grados a Farenheit\n"
	<<"2. Grados Farenheit a cent�grados\n";
	cin>>decision;
	switch (decision) {
	case '1':
		cout << "Por favor, introduzca su temperatura en grados cent�grados para calcular su equivalencia en la escala Farenheit:\n";
		cin >> temperaturaC;
		temperaturaF= temperaturaC * 1.8000 + 32.00;
		cout << "El resultado es " << temperaturaF << ".";
		break;
	case '2':
		cout << "Por favor, introduzca su temperatura en grados Farenheit para calcular su equivalencia en grados cent�grados:\n";
		cin >> temperaturaF;
		temperaturaC= (temperaturaF - 32.00) / 1.8000;
		cout << "El resultado es " << temperaturaC << ".";
		break;
	default:
		cout<<"Error, tecla incorrecta.\n";
		}
}
