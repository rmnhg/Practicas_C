//Ramón Hernández García 2ºC
//Noveno programa - C++
//Informática 2º Bachillerato
#include <stdio.h> //Definiciones de las macros, constantes y declaraciones de funciones de la biblioteca Standard de programación C.
#include <iostream> //Controla el flujo de entrada y salida de datos.
#include <math.h> //Contiene muchas funciones matemáticas.
#include <string> //Permite el uso de cadenas de texto en nuestro programa.

using namespace std; //Lo usamos para importar todas las funciones de la bibilioteca stl y, así, evitar introducir muchas funciones empezando por "std::".
int temperaturaC;
int temperaturaF;
int decision;

int main (){
    setlocale(LC_ALL, "Spanish"); //Permite utilizar caracteres españoles.
	cout<<"Seleccione la operación que desea realizar:\n"
	<<"1. Grados centígrados a Farenheit\n"
	<<"2. Grados Farenheit a centígrados\n";
	cin>>decision;
	switch (decision) {
	case '1':
		cout << "Por favor, introduzca su temperatura en grados centígrados para calcular su equivalencia en la escala Farenheit:\n";
		cin >> temperaturaC;
		temperaturaF= temperaturaC * 1.8000 + 32.00;
		cout << "El resultado es " << temperaturaF << ".";
		break;
	case '2':
		cout << "Por favor, introduzca su temperatura en grados Farenheit para calcular su equivalencia en grados centígrados:\n";
		cin >> temperaturaF;
		temperaturaC= (temperaturaF - 32.00) / 1.8000;
		cout << "El resultado es " << temperaturaC << ".";
		break;
	default:
		cout<<"Error, tecla incorrecta.\n";
		}
}
