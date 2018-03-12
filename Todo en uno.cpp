//Ram�n Hern�ndez Garc�a 2�C
//Todos los programas de C++
//Inform�tica 2� Bachillerato
#include <stdio.h> //Definiciones de las macros, constantes y declaraciones de funciones de la biblioteca Standard de programaci�n C.
#include <iostream> //Controla el flujo de entrada y salida de datos.
#include <math.h> //Contiene muchas funciones matem�ticas.
#include <string> //Permite el uso de cadenas de texto en nuestro programa.

using namespace std; //Lo usamos para importar todas las funciones de la bibilioteca stl y, as�, evitar introducir muchas funciones empezando por "std::".
char opcion;
int salir = 0;
string pausa;
string nombre_persona; //Programas 2 y 3
int edad_persona; //Programa 3
char letra; //Programa 4
int contador; //Programas 5, 7, 8 y 10
int numerouno; //Programas 5,7, 8 y 10
int numerodos; //Programas 5, 7, 8 y 10
int numero; //Programa 6
int b; //Programa 6
int factorial; //Programa 6
int temperaturaC; //Programa 9
int temperaturaF; //Programa 9
char decision; //Programas 9, 10, 11 y 12
int area; //Programas 11 y 12
int radio,longitud; //Programa 11
int lado, perimetro; //Programa 12
#define pi 3.14159265 //N�mero Pi aproximado //Programa 11

int main() {
    setlocale(LC_ALL, "Spanish"); //Permite utilizar caracteres espa�oles.
    while (salir == 0){ //No queremos salir todav�a del programa, saldremos cuando esta variable valga otra cosa, en nuestro caso 1.
    system("cls");
    cout << "Lista de programas:\n";
    cout << "a. Hola mundo.\n";
    cout << "b. Saludo con tu nombre.\n";
    cout << "c. Acceso a mayores de 18 a�os.\n";
    cout << "d. �Vocal o consonante?.\n";
    cout << "e. Cuenta de n�meros dentro de un intervalo definido.\n";
    cout << "f. Calculadora de factoriales.\n";
    cout << "g. Cuenta de n�meros enteros pares dentro de un intervalo definido.\n";
    cout << "h. Cuenta de n�meros enteros impares dentro de un intervalo definido.\n";
    cout << "i. Conversi�n grados cent�grados a Farenhait.\n";
    cout << "j. Cuenta de n�meros enteros dentro de un intervalo definido en orden creciente o decreciente.\n";
    cout << "k. Calculadora del �rea o de la longitud de un c�rculo.\n";
    cout << "l. C�lculo del �rea o del per�metro de un cuadrado.\n";
    cout << "m. Salir del programa.\n";
    cout << endl;
    cout << "Introduzca su opci�n, por favor:\n";
    cin>>opcion;
    switch (opcion) {
        case 'a':
            cout<<"Programa 1:"<<endl<<endl;
            cout<<"�Hola Mundo!\n";
            cout<<endl;
            system("PAUSE");
            break;
        case 'b':
            cout<<"Programa 2:"<<endl<<endl;
            cout<< "Por favor, inserte su nombre:"; //Pregunto el nombre
            cin >> nombre_persona; //Registro el nombre
            cout<<"Hola "  << nombre_persona << endl << "�Qu� tal est�s?"; //Saludo a la persona
            cout<<endl;
            system("PAUSE");
            break;
        case 'c':
                cout<<"Programa 3:"<<endl<<endl;
                cout<< "Por favor, introduza su nombre:\n";
                cin >> nombre_persona; //Registro el nombre de la persona
                cout<< "Por favor, introduzca su edad:\n"; //Pregunto la edad
                cin >> edad_persona; //Registro la edad
                if (edad_persona<18) {
                    cout<< "Lo sentimos " << nombre_persona << ", no podemos mostrarle este contenido. �Vuelva con 18 a�os!";
                } else {
                    cout<<"\n�Bienvenido al casino! " << nombre_persona;
                }
            cout<<endl;
            system("PAUSE");
            break;
        case 'd':
            cout<<"Programa 4:"<<endl<<endl;
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
            cout<<endl;
            system("PAUSE");
            break;
        case 'e':
            cout<<"Programa 5:"<<endl<<endl;
            cout << "Por favor, introduzca el primer numero del intervalo:\n";
            cin >> numerouno;
            cout << "Por favor, introduzca el �ltimo numero del intervalo:\n";
            cin >> numerodos;
            cout << "Su intervalo [" << numerouno << "," << numerodos << "] es el siguiente:" << endl;
            for (contador=numerouno; contador <= numerodos; contador++){
                cout << contador << ", ";
            }
            cout<<endl;
            system("PAUSE");
            break;
        case 'f':
            cout<<"Programa 6:"<<endl<<endl;
            cout << "Por favor, introduzca un n�mero para calcular su factorial:\n";
            cin >> numero;
            factorial=1;
            for (b=1 ; b<=numero ; b++) {
                factorial=b*factorial;
            }
            cout << "El factorial del n�mero " << numero << " es " << factorial << ".";
            cout<<endl;
            system("PAUSE");
            break;
        case 'g':
            cout<<"Programa 7:"<<endl<<endl;
            cout << "Por favor, introduzca el primer numero del intervalo:\n";
            cin >> numerouno;
            cout << "Por favor, introduzca el �ltimo numero del intervalo:\n";
            cin >> numerodos;
            cout << "Su intervalo [" << numerouno << "," << numerodos << "] de n�meros pares es el siguiente:" << endl;
            if ( numerouno % 2 == 0 ) { //Divido el primer n�mero entre dos. Si el resto es cero el n�mero es par.
                for (contador=numerouno; contador <= numerodos; contador+=2){
                    cout << contador << ", ";
                }
            } else {
                numerouno = numerouno + 1; //Como el primer n�mero es impar, le sumo una unidad para que el primer n�mero sea par.
                for (contador=numerouno; contador <= numerodos; contador+=2){
                    cout << contador << ", ";
                }
            }
            cout<<endl;
            system("PAUSE");
            break;
        case 'h':
            cout<<"Programa 8:"<<endl<<endl;
            cout << "Por favor, introduzca el primer numero del intervalo:\n";
            cin >> numerouno;
            cout << "Por favor, introduzca el �ltimo numero del intervalo:\n";
            cin >> numerodos;
            cout << "Su intervalo [" << numerouno << "," << numerodos << "] de n�meros pares es el siguiente:" << endl;
            if ( numerouno % 2 == 0 ) { //Divido el primer n�mero entre dos. Si el resto es cero el n�mero es par.
                numerouno = numerouno + 1; //Como el primer n�mero es impar, le sumo una unidad para que el primer n�mero sea par.
                for (contador=numerouno; contador <= numerodos; contador+=2){
                    cout << contador << ", ";
                }
            } else {
                for (contador=numerouno; contador <= numerodos; contador+=2){
                    cout << contador << ", ";
                }
            }
            cout<<endl;
            system("PAUSE");
            break;
        case 'i':
            cout<<"Programa 9:"<<endl<<endl;
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
            cout<<endl;
            system("PAUSE");
            break;
        case 'j':
            cout<<"Programa 10:"<<endl<<endl;
            cout << "Por favor, introduzca el primer numero del intervalo:\n";
            cin >> numerouno;
            cout << "Por favor, introduzca el �ltimo numero del intervalo:\n";
            cin >> numerodos;
            cout << "Por favor ind�que si desea ver los n�meros de mayor a menor (+) o de menor a mayor (-):\n";
            cin >> decision;
            switch (decision){
            case '+': //Cuando la tecla es +.
                cout << "Su intervalo [" << numerouno << "," << numerodos << "] es el siguiente:" << endl;
                for (contador=numerouno; contador <= numerodos; contador++){
                    cout << contador << ", ";
                }
            break;
            case '-': //Cuando la letra es -.
                cout << "Su intervalo [" << numerodos << "," << numerouno << "] es el siguiente:" << endl;
                for (contador=numerodos; contador >= numerouno; contador--){
                    cout << contador << ", ";
                }
            break;
            //Y sino...
            default:
                cout << "Disculpe, no ha pulsado la tecla correcta.";
            }
            cout << endl;
            system("PAUSE");
            break;
        case 'k':
            cout<<"Programa 11 (blog 1):"<<endl<<endl;
            cout << "Programa para calcular la longitud y el �rea de una circunferencia.\n";
            cout << "Por favor, introduzca el radio de la circunferencia:\n";
            cin >> radio;
            cout << "Por favor ind�que si desea calcular la longitud (l o L) o el �rea (a o A) de la circunferencia:\n";
            cin >> decision;
            switch (decision){
            case 'l': //Cuando la tecla es l.
                longitud = 2 * pi * radio;
                cout << "La longitud de su circunferencia de radio " << radio << " es la siguiente: " << endl << longitud;
            break;
            case 'L': //Cuando la tecla es L.
                longitud = 2 * pi * radio;
                cout << "La longitud de su circunferencia de radio " << radio << " es la siguiente: " << endl << longitud;
            break;
            case 'a': //Cuando la tecla es a.
                area = pi * radio * radio;
                cout << "El �rea de su circunferencia de radio " << radio << " es el siguiente: " << endl << area;
            break;
            case 'A': //Cuando la tecla es A.
                area = pi * radio * radio;
                cout << "El �rea de su circunferencia de radio " << radio << " es el siguiente: " << endl << area;
                break;
            //Y sino...
            default:
                cout << "Disculpe, no ha pulsado la tecla correcta.";
            }
            cout<<endl;
            system("PAUSE");
            break;
        case 'l':
            cout<<"Programa 12 (blog 2):"<<endl<<endl;
            cout << "Programa para calcular el per�metro y el �rea de un cuadrado.\n";
            cout << "Por favor, introduzca el lado del cuadrado:\n";
            cin >> lado;
            cout << "Por favor ind�que si desea calcular  el per�metro (p o P) o el �rea (a o A) del cuadrado:\n";
            cin >> decision;
            switch (decision){
            case 'p': //Cuando la tecla es p.
                perimetro = 4 * lado;
                cout << "El per�metro de su cuadrado de lado " << lado << " es el siguiente: " << endl << perimetro;
                break;
            case 'P': //Cuando la tecla es P.
                perimetro = 4 * lado;
                cout << "El per�metro de su cuadrado de lado " << lado << " es el siguiente: " << endl << perimetro;
                break;
            case 'a': //Cuando la tecla es a.
                area = lado * lado;
                cout << "El �rea de su cuadrado de lado " << lado << " es el siguiente: " << endl << area;
                break;
            case 'A': //Cuando la tecla es A.
                area = lado * lado;
                cout << "El �rea de su cuadrado de lado " << lado << " es el siguiente: " << endl << area;
                break;
            //Y sino...
            default:
                cout << "Disculpe, no ha pulsado la tecla correcta.";
            }
            cout<<endl;
            system("PAUSE");
            break;
        case 'm': //Salir
            salir = 1;
            break;
        //Y sino...
        default:
            cout << endl << "Error, vuelva a introducir su opci�n por favor."<<endl;
            system("PAUSE");
    }
}
}
//cin.get()
