//Ram�n Hern�ndez Garc�a 2�C
//D�cimo programa - C++
//Inform�tica 2� Bachillerato
#include <stdio.h> //Definiciones de las macros, constantes y declaraciones de funciones de la biblioteca Standard de programaci�n C.
#include <iostream> //Controla el flujo de entrada y salida de datos.
#include <math.h> //Contiene muchas funciones matem�ticas.
#include <string> //Permite el uso de cadenas de texto en nuestro programa.

using namespace std; //Lo usamos para importar todas las funciones de la bibilioteca stl y, as�, evitar introducir muchas funciones empezando por "std::".
int numerouno,numerodos,contador;
char decision;

int main (){
    setlocale(LC_ALL, "Spanish"); //Permite utilizar caracteres espa�oles.
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
}
