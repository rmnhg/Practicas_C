//Ramón Hernández García 2ºC
//Programa 1 del examen
//Informática 2º Bachillerato

#include <stdio.h> //Definiciones de las macros, constantes y declaraciones de funciones de la biblioteca Standard de programación C.
#include <iostream> //Controla el flujo de entrada y salida de datos.
#include <math.h> //Contiene muchas funciones matemáticas.
#include <string> //Permite el uso de cadenas de texto en nuestro programa.
#include <stdlib.h> //Para que la función system() funcione correctamente

using namespace std; //Lo usamos para importar todas las funciones de la bibilioteca stl y, así, evitar introducir muchas funciones empezando por "std::".


int numerouno,numerodos,b;
char opcion;
string salir;

int main () {
setlocale(LC_ALL, "Spanish"); //Permite utilizar caracteres españoles.
principio:
cout<<"Programa para calcular la suma o el producto de los números dentro de un intervalo"<<endl;
cout<<"Introduce el primer límite:"<<endl;
cin>>numerouno;
cout<<"Introduce el último límite:"<<endl;
cin>>numerodos;
cout<<"¿Quieres sumar los números (s) o hacer su producto (p)?"<<endl;
cin>>opcion;
switch (opcion) {
  case 'p':
    b=1;
    while (numerouno<=numerodos) {
      b=b*numerouno;
      if (numerouno!=numerodos) 
        cout<<numerouno<<"x";
      else
        cout<<numerouno<<"="<<b<<endl;
      numerouno++;
    }
    cout<<"El resultado es "<<b<<endl;
    cout<<"¿Quieres salir?"<<endl;
    cin>>salir;
    if (salir!="si"&&salir!="Si"&&salir!="SI")
      goto principio;
    break;
  case 's':
    b=0;
    while (numerouno<=numerodos) {
      b=b+numerouno;
      if (numerouno!=numerodos) 
        cout<<numerouno<<"+";
      else
        cout<<numerouno<<"="<<b<<endl;
      numerouno++;
    }
    cout<<"El resultado es "<<b<<endl;
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
