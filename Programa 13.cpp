//Ram�n Hern�ndez Garc�a
//Programa 13
//Hacer una calculadora de ecuaciones de segundo grado
//Inform�tica 2� Bachillerato
#include <stdio.h> //Definiciones de las macros, constantes y declaraciones de funciones de la biblioteca Standard de programaci�n C.
#include <iostream> //Controla el flujo de entrada y salida de datos.
#include <math.h> //Contiene muchas funciones matem�ticas.
#include <string> //Permite el uso de cadenas de texto en nuestro programa.

using namespace std; //Lo usamos para importar todas las funciones de la bibilioteca stl y, as�, evitar introducir muchas funciones empezando por "std::".

//Defino las variables para los coeficientes
float solecuacionmas,solecuacionmenos,coef_x2,coef_x1,coef_x0,raiz;

int main () {
    setlocale(LC_ALL, "Spanish"); //Permite utilizar caracteres espa�oles.
    cout<<"Buenos d�as usuario:"<<endl //Mensaje de bienvenida
    <<"En este programa puede especificar los coeficientes de una ecuaci�n de segundo grado y yo le dir� sus dos soluciones en caso de que existan."<<endl
    <<"En caso de que no existan soluciones, se lo notificar�."<<endl<<endl
    <<"Introduzca su coeficiente principal (x^2):"<<endl;
    cin>>coef_x2;
    cout<<"Introduzca su segundo coeficiente (x^1):"<<endl;
    cin>>coef_x1;
    cout<<"Introduzca su t�rmino independiente (x^0):"<<endl;
    cin>>coef_x0;
    raiz = ((coef_x1 * coef_x1) - (4 * coef_x2 * coef_x0)); //Primero eval�o el signo de la base de la ra�z
    if (raiz < 0) { //Si es negativo, devulevo error al usuario
            cout<<"Error, la base de la ra�z cuadrada es negativa. Los resultados de esta ecuaci�n no son reales. La base de su ra�z es: "<<raiz<<".";
    } else { //Sino calcula las dos ecuaciones
    solecuacionmas = ((- coef_x1 + sqrt( raiz )))/(2*coef_x2); //Soluci�n con el +
    solecuacionmenos = ((- coef_x1 - sqrt( raiz )))/(2*coef_x2); //SWoluci�n con el -
        cout<<"Los resultados de su ecuaci�n de segundo grado son "<<solecuacionmas<<" y "<<solecuacionmenos<<"."<<endl
            <<"�Gracias por utilizar mi programa!"<<endl; //Me despido del usuario
    }
}
