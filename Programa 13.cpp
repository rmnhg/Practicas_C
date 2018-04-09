//Ramón Hernández García
//Programa 13
//Hacer una calculadora de ecuaciones de segundo grado
//Informática 2º Bachillerato
#include <stdio.h> //Definiciones de las macros, constantes y declaraciones de funciones de la biblioteca Standard de programación C.
#include <iostream> //Controla el flujo de entrada y salida de datos.
#include <math.h> //Contiene muchas funciones matemáticas.
#include <string> //Permite el uso de cadenas de texto en nuestro programa.

using namespace std; //Lo usamos para importar todas las funciones de la bibilioteca stl y, así, evitar introducir muchas funciones empezando por "std::".

//Defino las variables para los coeficientes
float solecuacionmas,solecuacionmenos,coef_x2,coef_x1,coef_x0,raiz;

int main () {
    setlocale(LC_ALL, "Spanish"); //Permite utilizar caracteres españoles.
    cout<<"Buenos días usuario:"<<endl //Mensaje de bienvenida
    <<"En este programa puede especificar los coeficientes de una ecuación de segundo grado y yo le diré sus dos soluciones en caso de que existan."<<endl
    <<"En caso de que no existan soluciones, se lo notificaré."<<endl<<endl
    <<"Introduzca su coeficiente principal (x^2):"<<endl;
    cin>>coef_x2;
    cout<<"Introduzca su segundo coeficiente (x^1):"<<endl;
    cin>>coef_x1;
    cout<<"Introduzca su término independiente (x^0):"<<endl;
    cin>>coef_x0;
    raiz = ((coef_x1 * coef_x1) - (4 * coef_x2 * coef_x0)); //Primero evalúo el signo de la base de la raíz
    if (raiz < 0) { //Si es negativo, devulevo error al usuario
            cout<<"Error, la base de la raíz cuadrada es negativa. Los resultados de esta ecuación no son reales. La base de su raíz es: "<<raiz<<".";
    } else { //Sino calcula las dos ecuaciones
    solecuacionmas = ((- coef_x1 + sqrt( raiz )))/(2*coef_x2); //Solución con el +
    solecuacionmenos = ((- coef_x1 - sqrt( raiz )))/(2*coef_x2); //SWolución con el -
        cout<<"Los resultados de su ecuación de segundo grado son "<<solecuacionmas<<" y "<<solecuacionmenos<<"."<<endl
            <<"¡Gracias por utilizar mi programa!"<<endl; //Me despido del usuario
    }
}
