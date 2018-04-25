#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string>

using namespace std;

int a,b,c;
char opcion;
string salir;

int main () {
setlocale(LC_ALL, "Spanish");
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