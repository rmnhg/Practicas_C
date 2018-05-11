//Ramón Hernández García 2ºC
//Programa 2 del examen
//Informática 2º Bachillerato

#include <stdio.h> //Definiciones de las macros, constantes y declaraciones de funciones de la biblioteca Standard de programación C.
#include <iostream> //Controla el flujo de entrada y salida de datos.
#include <math.h> //Contiene muchas funciones matemáticas.
#include <string> //Permite el uso de cadenas de texto en nuestro programa.
#include <stdlib.h> //Para que la función system() funcione correctamente

using namespace std; //Lo usamos para importar todas las funciones de la bibilioteca stl y, así, evitar introducir muchas funciones empezando por "std::".


char palabra[100];
int letra,vocal;
string salir;

int main () {
setlocale(LC_ALL, "Spanish"); //Permite utilizar caracteres españoles.
while (salir!="si"&&salir!="Si"&&salir!="SI") {
vocal=0;
cout<<"Programa para contar el número de vocales de una palabra."<<endl;
cout<<"Escribe tu palabra:"<<endl;
cin>>palabra;
cout<<endl<<"Tu palabra es \""<<palabra<<"\"";
for(letra=0;letra<=100;letra++) {
switch (palabra[letra]) {
  case 'a':
	vocal++;
    break;
  case 'e':
	vocal++;
    break;
  case 'i':
	vocal++;
    break;
  case 'o':
	vocal++;
    break;
  case 'u':
	vocal++;
    break;
}
}
cout<<" y tiene "; if (vocal==1) cout<<vocal<<" vocal."<<endl; else cout<<vocal<<" vocales."<<endl;
cout<<"¿Quieres salir?"<<endl;
cin>>salir;
}
cout<<"Gracias por utilizar mi programa :)"<<endl;
}