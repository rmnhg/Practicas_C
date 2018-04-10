//Ram�n Hern�ndez Garc�a
//Programa 13
//Hacer una calculadora de ecuaciones de segundo grado
//Inform�tica 2� Bachillerato
#include <stdio.h> //Definiciones de las macros, constantes y declaraciones de funciones de la biblioteca Standard de programaci�n C.
#include <iostream> //Controla el flujo de entrada y salida de datos.
#include <math.h> //Contiene muchas funciones matem�ticas.
#include <string> //Permite el uso de cadenas de texto en nuestro programa.
#include <stdlib.h> //Permite utilizar la funci�n system()
#include <cstdio>
#include <clocale>

using namespace std; //Lo usamos para importar todas las funciones de la bibilioteca stl y, as�, evitar introducir muchas funciones empezando por "std::".

//Defino las variables para los coeficientes
int opcion;
int salir = 0; //Variable para salir del programa
float solecuacionmas,solecuacionmenos,coef_x2,coef_x1,coef_x0,a,b,c,raiz;

int main () {
    setlocale(LC_ALL, "Spanish"); //Permite utilizar caracteres espa�oles.
    while (salir == 0) {
    system("cls"); //Limpia la pantalla
    cout<<"Buenos d�as usuario:"<<endl //Mensaje de bienvenida
        <<"�Qu� desea hacer?"<<endl
        <<"1. Resolver una ecuaci�n autom�ticamente."<<endl
        <<"2. Resolver ecuaci�n maualmente."<<endl
        <<"3. Salir del programa."<<endl;
    cin>>opcion;
    switch (opcion) {
    case 1:
        cout<<"En este programa puede especificar los coeficientes de una ecuaci�n de segundo grado y yo le dir� sus dos soluciones en caso de que existan."<<endl
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
        solecuacionmas = ((- coef_x2 + sqrt( raiz )))/(2*coef_x2); //Soluci�n con el +
        solecuacionmenos = ((- coef_x2 - sqrt( raiz )))/(2*coef_x2); //SWoluci�n con el -
            cout<<"Los resultados de la ecuaci�n "<<coef_x2<<"x^2+"<<coef_x1<<"x^1+"<<coef_x0<<" son "<<solecuacionmas<<" y "<<solecuacionmenos<<"."<<endl
                <<"�Gracias por utilizar mi programa!"<<endl; //Me despido del usuario
        }
        system("PAUSE");
        break;
    case 2:
        cout<<"En este programa puede especificar los coeficientes de una ecuaci�n de segundo grado y la resolveremos paso a paso."<<endl
            <<"Introduzca su coeficiente principal (x^2):"<<endl;
        cin>>coef_x2;
        cout<<"Introduzca su segundo coeficiente (x^1):"<<endl;
        cin>>coef_x1;
        cout<<"Introduzca su t�rmino independiente (x^0):"<<endl;
        cin>>coef_x0;
        cout<<endl<<"Soluci�n 1:"<<endl
            <<"\nPaso 1: (-"<<coef_x2<<"+("<<coef_x1<<"^2-4*"<<coef_x2<<"*"<<coef_x0<<")^1/2)/(2*"<<coef_x2<<")"<<endl<<endl;
        system("PAUSE");
        a=coef_x1 * coef_x1;
        b=4*coef_x2*coef_x0;
        c=2*coef_x2;
        cout<<"\nPaso 2: (-"<<coef_x2<<"+("<<a<<"-"<<b<<")^1/2)/("<<c<<")"<<endl<<endl;
        system("PAUSE");
        raiz=a-b;
        cout<<"\nPaso 3: (-"<<coef_x2<<"+("<<raiz<<")^1/2)/("<<c<<")"<<endl<<endl;
        system("PAUSE");
        if (raiz<0) {
            cout<<"\nComo la base de la ra�z es "<<raiz<<" que es menor que 0, las soluciones de esta ecuaci�n van a ser irreales y, por tanto, no podemos seguir."<<endl;
        } else {
            a=sqrt(raiz);
            cout<<"\nPaso 4: (-"<<coef_x2<<"+"<<a<<")/("<<c<<")"<<endl<<endl;
            system("PAUSE");
            b=-coef_x2+a;
            cout<<"\nPaso 5: "<<b<<"/"<<c<<endl<<endl;
            system("PAUSE");
            solecuacionmas = b/c; //Soluci�n con el +
            cout<<"\nLa primera soluci�n de la ecuaci�n "<<coef_x2<<"x^2+"<<coef_x1<<"x^1+"<<coef_x0<<"es "<<solecuacionmas<<". Contin�a para ver la siguiente soluci�n."<<endl;
            system("PAUSE");
            system("cls");
            cout<<endl<<"Soluci�n 2:"<<endl
            <<"\nPaso 1: (-"<<coef_x2<<"-("<<coef_x1<<"^2-4*"<<coef_x2<<"*"<<coef_x0<<")^1/2)/(2*"<<coef_x2<<")"<<endl<<endl;
            system("PAUSE");
            a=coef_x1 * coef_x1;
            b=4*coef_x2*coef_x0;
            c=2*coef_x2;
            cout<<"\nPaso 2: (-"<<coef_x2<<"-("<<a<<"-"<<b<<")^1/2)/("<<c<<")"<<endl<<endl;
            system("PAUSE");
            raiz=a-b;
            cout<<"\nPaso 3: (-"<<coef_x2<<"-("<<raiz<<")^1/2)/("<<c<<")"<<endl<<endl;
            system("PAUSE");
            a=sqrt(raiz);
            cout<<"\nPaso 4: (-"<<coef_x2<<"-"<<a<<")/("<<c<<")"<<endl<<endl;
            system("PAUSE");
            b=-coef_x2-a;
            cout<<"\nPaso 5: "<<b<<"/"<<c<<endl<<endl;
            system("PAUSE");
            solecuacionmenos = b/c; //Soluci�n con el +
            cout<<"\nLa segunda soluci�n de la ecuaci�n "<<coef_x2<<"x^2+"<<coef_x1<<"x^1+"<<coef_x0<<"es "<<solecuacionmenos<<". Las dos soluciones de la ecuaci�n son "<<solecuacionmas<<" y "<<solecuacionmenos<<endl;
        }
        system("PAUSE");
        break;
    case 3:
        salir = 1;
        break;
    default:
        cout<<"Opci�n incorrecta, prueba de nuevo"<<endl;
        system("PAUSE");
    }
    }
    cout<<"�Gracias por utilizar el programa!";
}
