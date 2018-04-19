//Ramón Hernández García 2ºC
//Todos los programas de C++
//Informática 2º Bachillerato

#include <stdio.h> //Definiciones de las macros, constantes y declaraciones de funciones de la biblioteca Standard de programación C.
#include <iostream> //Controla el flujo de entrada y salida de datos.
#include <math.h> //Contiene muchas funciones matemáticas.
#include <string> //Permite el uso de cadenas de texto en nuestro programa.
#include <stdlib.h> //Para que la función system() funcione correctamente

//Librerías necesarias para la función std::setlocale:
#include <cstdio>
#include <clocale>
#include <ctime>
#include <cwchar>


using namespace std; //Lo usamos para importar todas las funciones de la bibilioteca stl y, así, evitar introducir muchas funciones empezando por "std::".

//Variables del programa:
int opcion; //Variable para elegir una opción del menú
int salir = 0; //Variable para salir del programa
int error; //Variable de error, para volver a preguntar
int opciones2; //Variable para cambiar las opciones avanzadas del programa
string language = "spanish"; //Variable para cambiar el lenguaje
int color; //Variable para cambiar los colores de la consola
string nombre_persona; //Programas 2 y 3
int edad_persona; //Programa 3
char letra; //Programa 4
int contador; //Programas 5, 7, 8 y 10
int numerouno; //Programas 5,7, 8 y 10
int numerodos; //Programas 5, 7, 8 y 10
int numero; //Programa 6
int b; //Programa 6
int factorial; //Programa 6
float temperaturaC; //Programa 9
float temperaturaF; //Programa 9
char decision; //Programas 9, 10, 11 y 12
float area; //Programas 11 y 12
float radio,longitud; //Programa 11
float lado, perimetro; //Programa 12
float solecuacionmas,solecuacionmenos,coef_x2,coef_x1,coef_x0,a,c,d,raiz; //Programa 13
#define pi 3.14159265 //Número Pi aproximado //Programa 11

int main() {
if (language == "spanish") { //Lenguaje español --> Inicio
    setlocale(LC_ALL, "Spanish"); //Permite utilizar caracteres españoles.
    setlocale(LC_NUMERIC, "Spanish"); //Permite mostrar los números con decimales con una coma
    setlocale(LC_TIME, "Spanish"); //Para mostrar la fecha en español
} //Lenguaje español --> Fin
    while (salir == 0){ //No queremos salir todavía del programa. Saldremos cuando esta variable valga otra cosa, en nuestro caso 1.
if (language == "spanish") {//Lenguaje español --> Inicio
    system("cls");
    cout << "Lista de programas:\n";
    cout << "1. Hola mundo.\n";
    cout << "2. Saludo con tu nombre.\n";
    cout << "3. Acceso a mayores de 18 años.\n";
    cout << "4. ¿Vocal o consonante?.\n";
    cout << "5. Cuenta de números dentro de un intervalo definido.\n";
    cout << "6. Calculadora de factoriales.\n";
    cout << "7. Cuenta de números enteros pares dentro de un intervalo definido.\n";
    cout << "8. Cuenta de números enteros impares dentro de un intervalo definido.\n";
    cout << "9. Conversión grados centígrados a Farenhait.\n";
    cout << "10. Cuenta de números enteros dentro de un intervalo definido en orden creciente o decreciente.\n";
    cout << "11. Calculadora del área o de la longitud de un círculo.\n";
    cout << "12. Cálculo del área o del perímetro de un cuadrado.\n";
    cout << "13. Calculadora de ecuaciones de segundo grado.\n";
    cout << "14. Opciones avanzadas del programa.\n";
    cout << "15. Salir del programa.\n";
    cout << endl;
    cout << "Introduzca su opción, por favor:\n";
    cin>>opcion;
    switch (opcion) {
        case 1:
			system("cls");
            cout<<"Programa 1:"<<endl<<endl;
            cout<<"¡Hola Mundo!\n";
            cout<<endl;
            system("PAUSE");
            break;
        case 2:
			system("cls");
            cout<<"Programa 2:"<<endl<<endl;
            cout<< "Por favor, inserte su nombre:"; //Pregunto el nombre
            cin >> nombre_persona; //Registro el nombre
            cout<<"Hola "  << nombre_persona << endl << "¿Qué tal estás?"; //Saludo a la persona
            cout<<endl;
            system("PAUSE");
            break;
        case 3:
			system("cls");
            cout<<"Programa 3:"<<endl<<endl;
            cout<< "Por favor, introduza su nombre:\n";
            cin >> nombre_persona; //Registro el nombre de la persona
            cout<< "Por favor, introduzca su edad:\n"; //Pregunto la edad
            cin >> edad_persona; //Registro la edad
            if (edad_persona<18) {
                cout<< "Lo sentimos " << nombre_persona << ", no podemos mostrarle este contenido. ¡Vuelva con 18 años!";
            } else {
               cout<<"\n¡Bienvenido al casino! " << nombre_persona;
            }
            cout<<endl;
            system("PAUSE");
            break;
        case 4:
			system("cls");
            cout<<"Programa 4:"<<endl<<endl;
            cout << "Buenos días. Por favor, introduzca una letra.\nYo le diré si es consonante o vocal: ";
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
        case 5:
			system("cls");
            cout<<"Programa 5:"<<endl<<endl;
            cout << "Por favor, introduzca el primer numero del intervalo:\n";
            cin >> numerouno;
            cout << "Por favor, introduzca el último numero del intervalo:\n";
            cin >> numerodos;
            cout << "Su intervalo [" << numerouno << "," << numerodos << "] es el siguiente:" << endl;
            for (contador=numerouno; contador <= numerodos; contador++){
                cout << contador << ", ";
            }
            cout<<endl;
            system("PAUSE");
            break;
        case 6:
			system("cls");
            cout<<"Programa 6:"<<endl<<endl;
            cout << "Por favor, introduzca un número para calcular su factorial:\n";
            cin >> numero;
            factorial=1;
            for (b=1 ; b<=numero ; b++) {
                factorial=b*factorial;
            }
            cout << "El factorial del número " << numero << " es " << factorial << ".";
            cout<<endl;
            system("PAUSE");
            break;
        case 7:
			system("cls");
            cout<<"Programa 7:"<<endl<<endl;
            cout << "Por favor, introduzca el primer numero del intervalo:\n";
            cin >> numerouno;
            cout << "Por favor, introduzca el último numero del intervalo:\n";
            cin >> numerodos;
            cout << "Su intervalo [" << numerouno << "," << numerodos << "] de números pares es el siguiente:" << endl;
            if ( numerouno % 2 == 0 ) { //Divido el primer número entre dos. Si el resto es cero el número es par.
                for (contador=numerouno; contador <= numerodos; contador+=2){
                    cout << contador << ", ";
                }
            } else {
                numerouno = numerouno + 1; //Como el primer número es impar, le sumo una unidad para que el primer número sea par.
                for (contador=numerouno; contador <= numerodos; contador+=2){
                    cout << contador << ", ";
                }
            }
            cout<<endl;
            system("PAUSE");
            break;
        case 8:
			system("cls");
            cout<<"Programa 8:"<<endl<<endl;
            cout << "Por favor, introduzca el primer numero del intervalo:\n";
            cin >> numerouno;
            cout << "Por favor, introduzca el último numero del intervalo:\n";
            cin >> numerodos;
            cout << "Su intervalo [" << numerouno << "," << numerodos << "] de números pares es el siguiente:" << endl;
            if ( numerouno % 2 == 0 ) { //Divido el primer número entre dos. Si el resto es cero el número es par.
                numerouno = numerouno + 1; //Como el primer número es impar, le sumo una unidad para que el primer número sea par.
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
        case 9:
			system("cls");
            cout<<"Programa 9:"<<endl<<endl;
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
            cout<<endl;
            system("PAUSE");
            break;
        case 10:
			system("cls");
            cout<<"Programa 10:"<<endl<<endl;
            cout << "Por favor, introduzca el primer numero del intervalo:\n";
            cin >> numerouno;
            cout << "Por favor, introduzca el último numero del intervalo:\n";
            cin >> numerodos;
            cout << "Por favor indíque si desea ver los números de menor a mayor (+) o de mayor a menor (-):\n";
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
        case 11:
			system("cls");
            cout<<"Programa 11 (blog 1):"<<endl<<endl;
            cout << "Programa para calcular la longitud y el área de un círculo.\n";
            cout << "Por favor, introduzca el radio del círculo:\n";
            cin >> radio;
            cout << "Por favor indíque si desea calcular la longitud (l o L) o el área (a o A) del círculo:\n";
            cin >> decision;
            switch (decision){
            case 'l': //Cuando la tecla es l.
                longitud = 2 * pi * radio;
                cout << "La longitud de su círculo de radio " << radio << " es la siguiente: " << endl << longitud;
            break;
            case 'L': //Cuando la tecla es L.
                longitud = 2 * pi * radio;
                cout << "La longitud de su círculo de radio " << radio << " es la siguiente: " << endl << longitud;
            break;
            case 'a': //Cuando la tecla es a.
                area = pi * radio * radio;
                cout << "El área de su círculo de radio " << radio << " es el siguiente: " << endl << area;
            break;
            case 'A': //Cuando la tecla es A.
                area = pi * radio * radio;
                cout << "El área de su círculo de radio " << radio << " es el siguiente: " << endl << area;
                break;
            //Y sino...
            default:
                cout << "Disculpe, no ha pulsado la tecla correcta.";
            }
            cout<<endl;
            system("PAUSE");
            break;
        case 12:
			system("cls");
            cout<<"Programa 12 (blog 2):"<<endl<<endl;
            cout << "Programa para calcular el perímetro y el área de un cuadrado.\n";
            cout << "Por favor, introduzca el lado del cuadrado:\n";
            cin >> lado;
            cout << "Por favor indíque si desea calcular  el perímetro (p o P) o el área (a o A) del cuadrado:\n";
            cin >> decision;
            switch (decision){
            case 'p': //Cuando la tecla es p.
                perimetro = 4 * lado;
                cout << "El perímetro de su cuadrado de lado " << lado << " es el siguiente: " << endl << perimetro;
                break;
            case 'P': //Cuando la tecla es P.
                perimetro = 4 * lado;
                cout << "El perímetro de su cuadrado de lado " << lado << " es el siguiente: " << endl << perimetro;
                break;
            case 'a': //Cuando la tecla es a.
                area = lado * lado;
                cout << "El área de su cuadrado de lado " << lado << " es el siguiente: " << endl << area;
                break;
            case 'A': //Cuando la tecla es A.
                area = lado * lado;
                cout << "El área de su cuadrado de lado " << lado << " es el siguiente: " << endl << area;
                break;
            //Y sino...
            default:
                cout << "Disculpe, no ha pulsado la tecla correcta.";
            }
            cout<<endl;
            system("PAUSE");
            break;
        case 13:
			system("cls");
            cout<<"Programa 13:"<<endl<<endl;
            cout<<"Calculadora de ecuaciones de segundo grado.\n";
			while (salir == 0) {
			system("cls"); //Limpia la pantalla
			cout<<"Buenos días usuario:"<<endl //Mensaje de bienvenida
				<<"¿Qué desea hacer?"<<endl
				<<"1. Resolver una ecuación automáticamente."<<endl
				<<"2. Resolver ecuación manualmente."<<endl
				<<"3. Salir del programa."<<endl;
			cin>>opcion;
			switch (opcion) {
			case 1:
				cout<<"En este programa puede especificar los coeficientes de una ecuación de segundo grado y yo le diré sus dos soluciones en caso de que existan."<<endl
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
				solecuacionmas = ((- coef_x2 + sqrt( raiz )))/(2*coef_x2); //Solución con el +
				solecuacionmenos = ((- coef_x2 - sqrt( raiz )))/(2*coef_x2); //SWolución con el -
					cout<<"Los resultados de la ecuación "<<coef_x2<<"x^2+"<<coef_x1<<"x^1+"<<coef_x0<<" son "<<solecuacionmas<<" y "<<solecuacionmenos<<"."<<endl
						<<"¡Gracias por utilizar mi programa!"<<endl; //Me despido del usuario
				}
				system("PAUSE");
				break;
			case 2:
				system("cls");
				cout<<"En este programa puede especificar los coeficientes de una ecuación de segundo grado y la resolveremos paso a paso."<<endl
					<<"Introduzca su coeficiente principal (x^2):"<<endl;
				cin>>coef_x2;
				cout<<"Introduzca su segundo coeficiente (x^1):"<<endl;
				cin>>coef_x1;
				cout<<"Introduzca su término independiente (x^0):"<<endl;
				cin>>coef_x0;
				cout<<endl<<"Solución 1:"<<endl
					<<"\nPaso 1: (-"<<coef_x2<<"+("<<coef_x1<<"^2-4*"<<coef_x2<<"*"<<coef_x0<<")^1/2)/(2*"<<coef_x2<<")"<<endl<<endl;
				system("PAUSE");
				a=coef_x1 * coef_x1;
				d=4*coef_x2*coef_x0;
				c=2*coef_x2;
				cout<<"\nPaso 2: (-"<<coef_x2<<"+("<<a<<"-"<<d<<")^1/2)/("<<c<<")"<<endl<<endl;
				system("PAUSE");
				raiz=a-b;
				cout<<"\nPaso 3: (-"<<coef_x2<<"+("<<raiz<<")^1/2)/("<<c<<")"<<endl<<endl;
				system("PAUSE");
				if (raiz<0) {
					cout<<"\nComo la base de la raíz es "<<raiz<<", que es menor que 0, las soluciones de esta ecuación van a ser irreales y, por tanto, no podemos seguir."<<endl;
				} else {
					a=sqrt(raiz);
					cout<<"\nPaso 4: (-"<<coef_x2<<"+"<<a<<")/("<<c<<")"<<endl<<endl;
					system("PAUSE");
					b=-coef_x2+a;
					cout<<"\nPaso 5: "<<b<<"/"<<c<<endl<<endl;
					system("PAUSE");
					solecuacionmas = b/c; //Solución con el +
					cout<<"\nLa primera solución de la ecuación "<<coef_x2<<"x^2+"<<coef_x1<<"x^1+"<<coef_x0<<"es "<<solecuacionmas<<". Continúa para ver la siguiente solución."<<endl;
					system("PAUSE");
					system("cls");
					cout<<endl<<"Solución 2:"<<endl
					<<"\nPaso 1: (-"<<coef_x2<<"-("<<coef_x1<<"^2-4*"<<coef_x2<<"*"<<coef_x0<<")^1/2)/(2*"<<coef_x2<<")"<<endl<<endl;
					system("PAUSE");
					a=coef_x1 * coef_x1;
					d=4*coef_x2*coef_x0;
					c=2*coef_x2;
					cout<<"\nPaso 2: (-"<<coef_x2<<"-("<<a<<"-"<<d<<")^1/2)/("<<c<<")"<<endl<<endl;
					system("PAUSE");
					raiz=a-d;
					cout<<"\nPaso 3: (-"<<coef_x2<<"-("<<raiz<<")^1/2)/("<<c<<")"<<endl<<endl;
					system("PAUSE");
					a=sqrt(raiz);
					cout<<"\nPaso 4: (-"<<coef_x2<<"-"<<a<<")/("<<c<<")"<<endl<<endl;
					system("PAUSE");
					d=-coef_x2-a;
					cout<<"\nPaso 5: "<<b<<"/"<<c<<endl<<endl;
					system("PAUSE");
					solecuacionmenos = d/c; //Solución con el +
					cout<<"\nLa segunda solución de la ecuación "<<coef_x2<<"x^2+"<<coef_x1<<"x^1+"<<coef_x0<<"es "<<solecuacionmenos<<". Las dos soluciones de la ecuación son "<<solecuacionmas<<" y "<<solecuacionmenos<<"."<<endl;
				}
				system("PAUSE");
				break;
			case 3:
				salir = 1;
				break;
			default:
				cout<<"Opción incorrecta, prueba de nuevo."<<endl;
				system("PAUSE");
			}
			}
			cout<<"¡Gracias por utilizar el programa!";
			system("PAUSE");
			salir = 0;
			break;
        case 14:
            while (salir!=1) {
                system ("cls");
                cout<<"Opciones avanzadas:"<<endl
                    <<"1. Cambiar idioma del programa"<<endl
                    <<"2. Cambiar color de la consola"<<endl
                    <<"3. Easter EGG"<<endl;
                cin>>opciones2;
                switch (opciones2) {
                case 1:
                    while (salir!=1) {
                    cout<<endl<<"Seleccione el idioma deseado disponible:"<<endl
                        <<"1. Español"<<endl
                        <<"2. Inglés"
                        <<endl;
                    cin>>opciones2;
                    switch(opciones2) {
                    case 1:
                        language = "spanish";
                        cout<<"Español seleccionado correctamente."<<endl;
                        salir=1;
                        break;
                    case 2:
                        language = "english";
                        cout<<"English correctly chosen."<<endl;
                        salir=1;
                        break;
                    default:
                        cout<<"Error, la opción elegida no existe."<<endl;
                        salir=0;
                        system("cls");
                        break;
                    }
                    }
                    salir=1;
                    break;
                case 2:
                    cout << "¿Qué color quieres?" <<endl;
                    cin >> color;
                    switch (color) {
                    case 1:
                        system ("color 0f");
                        system ("cls");
                    break;
                    case 2:
                        system ("color f0");
                        system ("cls");
                        break;
                    case 3:
                        system ("color 0a");
                        system ("cls");
                        break;
                    case 4:
                        system ("color 9f");
                        system ("cls");
                        break;
                    case 5:
                        system ("color 0d");
                        system ("cls");
                        break;
                    case 6:
                        system ("color 0e");
                        system ("cls");
                        break;
                    case 7:
                        system ("color 2f");
                        system ("cls");
                        break;
                    case 8:
                        system ("color 8e");
                        system ("cls");
                        break;
                    default:
                        cout << "No has escrito una opción válida, vuelve a probar con un número del 1 al 8." <<endl;
                        break;
                    }
                    salir=1;
                    break;
                case 3:
                    system("start https://github.com/rmnhg");
                    salir=1;
                    break;
                default:
                    cout<<"Error, la opción escogida no existe."<<endl;
                    break;
                }
            }
            system("PAUSE");
            salir = 0;
            break;
        case 15: //Salir
            salir = 1;
            break;
        //Y sino...
        default:
            cout << endl << "Error, vuelva a introducir su opción por favor."<<endl;
            system("PAUSE");
    }
} //Lenguage español --> Fin
else if (language == "english") { //English language --> start
    system("cls");
    cout << "Program list:\n";
    cout << "1. Hello world.\n";
    cout << "2. Greeting with your name.\n";
    cout << "3. 18-year-old access.\n";
    cout << "4. Vowel or consonant?.\n";
    cout << "5. Count numbers within a defined interval.\n";
    cout << "6. Factorial calculator.\n";
    cout << "7. Count of even integers within a defined interval.\n";
    cout << "8. Account of odd integers within a defined interval.\n";
    cout << "9. Conversion degrees centigrade to Farenhait.\n";
    cout << "10. Count whole numbers within a defined interval in increasing or decreasing order.\n";
    cout << "11. Calculator of the area or length of a circle.\n";
    cout << "12. Calculation of the area or perimeter of a square.\n";
    cout << "13. Calculator of equations of second degree.\n";
    cout << "14. Advanced options.\n";
    cout << "15. Exit the program.\n";
    cout << endl;
    cout << "Please, choose an option:\n";
    cin>>opcion;
    switch (opcion) {
        case 1:
			system("cls");
            cout<<"Program 1:"<<endl<<endl;
            cout<<"Hello world!\n";
            cout<<endl;
            system("PAUSE");
            break;
        case 2:
			system("cls");
            cout<<"Program 2:"<<endl<<endl;
            cout<< "Please,type your name:"; //Pregunto el nombre
            cin >> nombre_persona; //Registro el nombre
            cout<<"Hi "  << nombre_persona << endl << ". How are you?"; //Saludo a la persona
            cout<<endl;
            system("PAUSE");
            break;
        case 3:
			system("cls");
            cout<<"Program 3:"<<endl<<endl;
            cout<< "Please, type your name:\n";
            cin >> nombre_persona; //Registro el nombre de la persona
            cout<< "Please, type your age:\n"; //Pregunto la edad
            cin >> edad_persona; //Registro la edad
            if (edad_persona<18) {
                cout<< "We are sorry " << nombre_persona << ", we can not show you this content. Come back with 18 years old!";
            } else {
               cout<<"\nWelcome to the casino! " << nombre_persona;
            }
            cout<<endl;
            system("PAUSE");
            break;
        case 4:
			system("cls");
            cout<<"Program 4:"<<endl<<endl;
            cout << "Good morning. Please, insert a letter.\nI will tell you if it is a vowel or a consonant: ";
            cin>>letra;
            switch (letra){
            case 'a': //Cuando la letra es a.
                cout << "This is a vowel." << endl;
                break;
            case 'A': //Cuando la letra es A.
                cout << "This is a vowel." << endl;
                break;
            case 'e': //Cuando la letra es e.
                cout << "This is a vowel." << endl;
                break;
            case 'E': //Cuando la letra es E.
                cout << "Esto es una vocal." << endl;
                break;
            case 'i': //Cuando la letra es i.
                cout << "This is a vowel." << endl;
                break;
            case 'I': //Cuando la letra es I.
                cout << "This is a vowel." << endl;
                break;
            case 'o': //Cuando la letra es o.
                cout << "This is a vowel." << endl;
                break;
            case 'O': //Cuando la letra es O.
                cout << "This is a vowel." << endl;
                break;
            case 'u': //Cuando la letra es u.
                cout << "This is a vowel." << endl;
                break;
            case 'U': //Cuando la letra es U.
                cout << "This is a vowel." << endl;
                break;
                //Y sino...
            default:
                cout << "You have entered a consonant."<<endl;
            }
            cout<<endl;
            system("PAUSE");
            break;
        case 5:
			system("cls");
            cout<<"Program 5:"<<endl<<endl;
            cout << "Please, type the first number of the interval:\n";
            cin >> numerouno;
            cout << "Please, type the last number of the interval:\n";
            cin >> numerodos;
            cout << "Your interval [" << numerouno << "," << numerodos << "] is this one:" << endl;
            for (contador=numerouno; contador <= numerodos; contador++){
                cout << contador << ", ";
            }
            cout<<endl;
            system("PAUSE");
            break;
        case 6:
			system("cls");
            cout<<"Program 6:"<<endl<<endl;
            cout << "Please, type a number to calculate its factorial:\n";
            cin >> numero;
            factorial=1;
            for (b=1 ; b<=numero ; b++) {
                factorial=b*factorial;
            }
            cout << "The factorial of the number " << numero << " is " << factorial << ".";
            cout<<endl;
            system("PAUSE");
            break;
        case 7:
			system("cls");
            cout<<"Program 7:"<<endl<<endl;
            cout << "Please, type the first number of the interval:\n";
            cin >> numerouno;
            cout << "Please, type the last number of the interval:\n";
            cin >> numerodos;
            cout << "Your interval [" << numerouno << "," << numerodos << "] of pair numbers is this one:" << endl;
            if ( numerouno % 2 == 0 ) { //Divido el primer número entre dos. Si el resto es cero el número es par.
                for (contador=numerouno; contador <= numerodos; contador+=2){
                    cout << contador << ", ";
                }
            } else {
                numerouno = numerouno + 1; //Como el primer número es impar, le sumo una unidad para que el primer número sea par.
                for (contador=numerouno; contador <= numerodos; contador+=2){
                    cout << contador << ", ";
                }
            }
            cout<<endl;
            system("PAUSE");
            break;
        case 8:
			system("cls");
            cout<<"Program 8:"<<endl<<endl;
            cout << "Please, type the first number of the interval:\n";
            cin >> numerouno;
            cout << "Please, type the last number of the interval:\n";
            cin >> numerodos;
            cout << "Your interval [" << numerouno << "," << numerodos << "] of odd numbers is this one:" << endl;
            if ( numerouno % 2 == 0 ) { //Divido el primer número entre dos. Si el resto es cero el número es par.
                numerouno = numerouno + 1; //Como el primer número es impar, le sumo una unidad para que el primer número sea par.
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
        case 9:
			system("cls");
            cout<<"Program 9:"<<endl<<endl;
        	cout<<"Choose the task you want to do:\n"
            <<"1. Convert degrees centigrade to Fahrenheit\n"
            <<"2. Convert Fahrenheit to degrees centigrade\n";
            cin>>decision;
            switch (decision) {
            case '1':
                cout << "Please enter your temperature in degrees centigrade to calculate your equivalence on the Farenheit scale:\n";
                cin >> temperaturaC;
                temperaturaF= temperaturaC * 1.8000 + 32.00;
                cout << "The result is " << temperaturaF << ".";
                break;
            case '2':
                cout << "Please enter your temperature in degrees Fahrenheit to calculate your equivalence in degrees centigrade:\n";
                cin >> temperaturaF;
                temperaturaC= (temperaturaF - 32.00) / 1.8000;
                cout << "The result is " << temperaturaC << ".";
                break;
            default:
                cout<<"Error, incorrect option.\n";
            }
            cout<<endl;
            system("PAUSE");
            break;
        case 10:
			system("cls");
            cout<<"Program 10:"<<endl<<endl;
            cout << "Please, type the first number of the interval:\n";
            cin >> numerouno;
            cout << "Please, type the last number of the interval:\n";
            cin >> numerodos;
            cout << "Please indicate if you want to see the numbers from lowest to highest (+) or highest to lowest (-):\n";
            cin >> decision;
            switch (decision){
            case '+': //Cuando la tecla es +.
                cout << "Your interval [" << numerouno << "," << numerodos << "] is this one:" << endl;
                for (contador=numerouno; contador <= numerodos; contador++){
                    cout << contador << ", ";
                }
            break;
            case '-': //Cuando la letra es -.
                cout << "Your interval [" << numerouno << "," << numerodos << "] is this one:" << endl;
                for (contador=numerodos; contador >= numerouno; contador--){
                    cout << contador << ", ";
                }
            break;
            //Y sino...
            default:
                cout << "Excuse me, you have not pressed the correct key.";
            }
            cout << endl;
            system("PAUSE");
            break;
        case 11:
			system("cls");
            cout<<"Program 11 (blog 1):"<<endl<<endl;
            cout << "Program to calculate the length and area of a circle.\n";
            cout << "Please enter the radius of the circle:\n";
            cin >> radio;
            cout << "Please indicate if you want to calculate the length (l or L) or area (a or A) of the circle:\n";
            cin >> decision;
            switch (decision){
            case 'l': //Cuando la tecla es l.
                longitud = 2 * pi * radio;
                cout << "The length of your circle of radio " << radio << " is this one: " << endl << longitud;
            break;
            case 'L': //Cuando la tecla es L.
                longitud = 2 * pi * radio;
                cout << "The length of your circle of radio " << radio << " is this one: " << endl << longitud;
            break;
            case 'a': //Cuando la tecla es a.
                area = pi * radio * radio;
                cout << "The area of your circle of radio " << radio << " is this one: " << endl << area;
            break;
            case 'A': //Cuando la tecla es A.
                area = pi * radio * radio;
                cout << "The area of your circle of radio " << radio << " is this one: " << endl << area;
                break;
            //Y sino...
            default:
                cout << "Excuse me, you have not pressed the correct key.";
            }
            cout<<endl;
            system("PAUSE");
            break;
        case 12:
			system("cls");
            cout<<"Program 12 (blog 2):"<<endl<<endl;
            cout << "Program to calculate the perimeter and area of a square.\n";
            cout << "Please enter the side of the square:\n";
            cin >> lado;
            cout << "Please indicate if you want to calculate the perimeter (p or P) or area (a or A) of the square:\n";
            cin >> decision;
            switch (decision){
            case 'p': //Cuando la tecla es p.
                perimetro = 4 * lado;
                cout << "The perimeter of your square of side " << lado << " is this one: " << endl << perimetro;
                break;
            case 'P': //Cuando la tecla es P.
                perimetro = 4 * lado;
                cout << "The perimeter of your square of side " << lado << " is this one: " << endl << perimetro;
                break;
            case 'a': //Cuando la tecla es a.
                area = lado * lado;
                cout << "The area of your square of side " << lado << " is this one: " << endl << area;
                break;
            case 'A': //Cuando la tecla es A.
                area = lado * lado;
                cout << "The area of your square of side " << lado << " is this one: " << endl << area;
                break;
            //Y sino...
            default:
                cout << "Excuse me, you have not pressed the correct key.";
            }
            cout<<endl;
            system("PAUSE");
            break;
        case 13:
			system("cls");
            cout<<"Program 13:"<<endl<<endl;
            cout<<"Second degree equation calculator.\n";
			while (salir == 0) {
			system("cls"); //Limpia la pantalla
			cout<<"Good morning user:"<<endl //Mensaje de bienvenida
				<<"What do you want to do?"<<endl
				<<"1. Solve an equation automatically."<<endl
				<<"2. Solve an equation manually."<<endl
				<<"3. Exit the program."<<endl;
			cin>>opcion;
			switch (opcion) {
			case 1:
                cout<<"In this program you can specify the coefficients of a second degree equation and I will tell you its two solutions if they exist."<<endl
                    <<"In case there are no solutions, I will notify you."<<endl<<endl
                    <<"Enter your main coefficient (x ^ 2):"<<endl;
				cin>>coef_x2;
				cout<<"Enter your second coefficient (x^1):"<<endl;
				cin>>coef_x1;
				cout<<"Enter your third coefficient (x^0):"<<endl;
				cin>>coef_x0;
				raiz = ((coef_x1 * coef_x1) - (4 * coef_x2 * coef_x0)); //Primero evalúo el signo de la base de la raíz
				if (raiz < 0) { //Si es negativo, devulevo error al usuario
						cout<<"Error, the base of the square root is negative. The results of this equation are not real. The base of your root is: "<<raiz<<".";
				} else { //Sino calcula las dos ecuaciones
				solecuacionmas = ((- coef_x2 + sqrt( raiz )))/(2*coef_x2); //Solución con el +
				solecuacionmenos = ((- coef_x2 - sqrt( raiz )))/(2*coef_x2); //SWolución con el -
					cout<<"The results of the equation "<<coef_x2<<"x^2+"<<coef_x1<<"x^1+"<<coef_x0<<" are "<<solecuacionmas<<" and "<<solecuacionmenos<<"."<<endl
						<<"Thanks for using my program!"<<endl; //Me despido del usuario
				}
				system("PAUSE");
				break;
			case 2:
				system("cls");
				cout<<"In this program you can specify the coefficients of a second degree equation and we will solve it step by step."<<endl
					<<"Enter your main coefficient (x ^ 2):"<<endl;
				cin>>coef_x2;
				cout<<"Enter your second coefficient (x^1):"<<endl;
				cin>>coef_x1;
				cout<<"Enter your third coefficient (x^0):"<<endl;
				cin>>coef_x0;
				cout<<endl<<"Solution 1:"<<endl
					<<"\nStep 1: (-"<<coef_x2<<"+("<<coef_x1<<"^2-4*"<<coef_x2<<"*"<<coef_x0<<")^1/2)/(2*"<<coef_x2<<")"<<endl<<endl;
				system("PAUSE");
				a=coef_x1 * coef_x1;
				d=4*coef_x2*coef_x0;
				c=2*coef_x2;
				cout<<"\nStep 2: (-"<<coef_x2<<"+("<<a<<"-"<<d<<")^1/2)/("<<c<<")"<<endl<<endl;
				system("PAUSE");
				raiz=a-b;
				cout<<"\nStep 3: (-"<<coef_x2<<"+("<<raiz<<")^1/2)/("<<c<<")"<<endl<<endl;
				system("PAUSE");
				if (raiz<0) {
					cout<<"\nSince the base of the root is "<<raiz<<", which is less than 0, the solutions of this equation are going to be unreal and, therefore, we can not continue."<<endl;
				} else {
					a=sqrt(raiz);
					cout<<"\nStep 4: (-"<<coef_x2<<"+"<<a<<")/("<<c<<")"<<endl<<endl;
					system("PAUSE");
					b=-coef_x2+a;
					cout<<"\nStep 5: "<<b<<"/"<<c<<endl<<endl;
					system("PAUSE");
					solecuacionmas = b/c; //Solución con el +
					cout<<"\nThe first solution of the equation "<<coef_x2<<"x^2+"<<coef_x1<<"x^1+"<<coef_x0<<" is "<<solecuacionmas<<". Continue to see the next solution."<<endl;
					system("PAUSE");
					system("cls");
					cout<<endl<<"Solution 2:"<<endl
					<<"\nStep 1: (-"<<coef_x2<<"-("<<coef_x1<<"^2-4*"<<coef_x2<<"*"<<coef_x0<<")^1/2)/(2*"<<coef_x2<<")"<<endl<<endl;
					system("PAUSE");
					a=coef_x1 * coef_x1;
					d=4*coef_x2*coef_x0;
					c=2*coef_x2;
					cout<<"\nStep 2: (-"<<coef_x2<<"-("<<a<<"-"<<d<<")^1/2)/("<<c<<")"<<endl<<endl;
					system("PAUSE");
					raiz=a-d;
					cout<<"\nStep 3: (-"<<coef_x2<<"-("<<raiz<<")^1/2)/("<<c<<")"<<endl<<endl;
					system("PAUSE");
					a=sqrt(raiz);
					cout<<"\nStep 4: (-"<<coef_x2<<"-"<<a<<")/("<<c<<")"<<endl<<endl;
					system("PAUSE");
					d=-coef_x2-a;
					cout<<"\nStep 5: "<<b<<"/"<<c<<endl<<endl;
					system("PAUSE");
					solecuacionmenos = d/c; //Solución con el +
					cout<<"\nThe second solution of the equation "<<coef_x2<<"x^2+"<<coef_x1<<"x^1+"<<coef_x0<<" is "<<solecuacionmenos<<". The two solutions of the equation are "<<solecuacionmas<<" and "<<solecuacionmenos<<"."<<endl;
				}
				system("PAUSE");
				break;
			case 3:
				salir = 1;
				break;
			default:
				cout<<"Incorrect option, try again."<<endl;
				system("PAUSE");
			}
			}
			cout<<"Thanks for using my program!";
			system("PAUSE");
			salir = 0;
			break;
        case 14:
            while (salir!=1) {
                system ("cls");
                cout<<"Advanced options:"<<endl
                    <<"1. Change the language of the program"<<endl
                    <<"2. Change the color of the console"<<endl
                    <<"3. Easter EGG"<<endl;
                cin>>opciones2;
                switch (opciones2) {
                case 1:
                    while (salir!=1) {
                    cout<<endl<<"Choose the wanted language available:"<<endl
                        <<"1. Spanish"<<endl
                        <<"2. English"
                        <<endl;
                    cin>>opciones2;
                    switch(opciones2) {
                    case 1:
                        language = "spanish";
                        cout<<"Español seleccionado correctamente."<<endl;
                        salir=1;
                        break;
                    case 2:
                        language = "english";
                        cout<<"English correctly chosen."<<endl;
                        salir=1;
                        break;
                    default:
                        cout<<"Error, the chosen option does not exist."<<endl;
                        salir=0;
                        system("cls");
                        break;
                    }
                    }
                    salir=1;
                    break;
                case 2:
                    cout << "What color do you want?" <<endl;
                    cin >> color;
                    switch (color) {
                    case 1:
                        system ("color 0f");
                        system ("cls");
                    break;
                    case 2:
                        system ("color f0");
                        system ("cls");
                        break;
                    case 3:
                        system ("color 0a");
                        system ("cls");
                        break;
                    case 4:
                        system ("color 9f");
                        system ("cls");
                        break;
                    case 5:
                        system ("color 0d");
                        system ("cls");
                        break;
                    case 6:
                        system ("color 0e");
                        system ("cls");
                        break;
                    case 7:
                        system ("color 2f");
                        system ("cls");
                        break;
                    case 8:
                        system ("color 8e");
                        system ("cls");
                        break;
                    default:
                        cout << "You have not written a valid number, please try again with a number within 1 to 8." <<endl;
                        break;
                    }
                    salir=1;
                    break;
                case 3:
                    system("start https://github.com/rmnhg");
                    salir=1;
                    break;
                default:
                    cout<<"Error, the chosen option does not exist."<<endl;
                    break;
                }
            }
            system("PAUSE");
            salir = 0;
            break;
        case 15: //Salir
            salir = 1;
            break;
        //Y sino...
        default:
            cout << endl << "Error, enter again your option."<<endl;
            system("PAUSE");
    }
} //English language --> end
}
}
