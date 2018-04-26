//Ramón Hernández García 2ºC
//Programa 1 del examen
//Informática 2º Bachillerato

#include <stdio.h> //Definiciones de las macros, constantes y declaraciones de funciones de la biblioteca Standard de programación C.
#include <iostream> //Controla el flujo de entrada y salida de datos.
#include <math.h> //Contiene muchas funciones matemáticas.
#include <string> //Permite el uso de cadenas de texto en nuestro programa.
#include <stdlib.h> //Para que la función system() funcione correctamente

using namespace std; //Lo usamos para importar todas las funciones de la bibilioteca stl y, así, evitar introducir muchas funciones empezando por "std::".


int a,b,c;
char opcion;
string salir;

int main () {
setlocale(LC_ALL, "Spanish"); //Permite utilizar caracteres españoles.
principio:
cout<<"Programa para calcular el producto de los números dentro de un intervalo"<<endl;
cout<<"Introduce el primer límite:"<<endl;
cin>>a;
cout<<"Introduce el último límite:"<<endl;
cin>>b;
cout<<"¿Quieres sumar los números (s) o hacer su producto (p)?"<<endl;
cin>>opcion;
switch (opcion) {
  case 'p':
    c=1;
    while (a<=b) {
      c=c*a;
      if (a!=b) 
        cout<<a<<"x";
      else
        cout<<a<<"="<<c<<endl;
      a++;
    }
    cout<<"El resultado es "<<c<<endl;
    cout<<"¿Quieres salir?"<<endl;
    cin>>salir;
    if (salir!="si"&&salir!="Si"&&salir!="SI")
      goto principio;
    break;
  case 's':
    c=0;
    while (a<=b) {
      c=c+a;
      if (a!=b) 
        cout<<a<<"+";
      else
        cout<<a<<"="<<c<<endl;
      a++;
    }
    cout<<"El resultado es "<<c<<endl;
    cout<<"¿Quieres salir?"<<endl;
    cin>>salir;
    if (salir!="si"&&salir!="Si"&&salir!="SI")
      goto principio;
    break;
  default:
    cout<<"Error, prueba de nuevo."<<endl;
    goto principio;
}
cout<<"Gracias por utilizar mi programa :)"<<endl;
}
