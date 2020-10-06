
/*
Ejercicio 28. Escriba un programa que encuentre el valor aproximado de pi en base a la siguiente
suma infinita:
π = 4(1 − 1/3 + 1/5 − 1/7 + 1/9...)
El usuario debe ingresar el número de elementos usados en la aproximación.
Ej: si se ingresa 3 π = 4(1 − 1/3 + 1/5) = 3,46667, por lo que se debe imprimir:
pi es aproximadamente: 3.46667
*/

#include <iostream>

using namespace std;

int main(){

    //Declaramos las variables del programa
    float n = 1;
    float m = 1;
    float sumatoria = 0;
    float numero;
    int contador = 0;

    cout << "Ingrese el numero: ";
    cin >> numero;

    //Ciclo for para fromar el numero
    for (int i = 0; i < numero; i++){

        contador += 1;

        //1
        if (contador == 1)
            sumatoria += (n/m);

        //-1/3
        else if (contador == 2)
            sumatoria -= (n/m);

        //1/5 //1/9 ...
        else if (contador > 2 && contador %2 == 1)
            sumatoria += (n/m);
        //-1/7 //-1/11 ...
        else
            sumatoria -= (n/m);

        m += 2;

    }

    cout << numero << " pi = " << sumatoria * 4  << endl;

    return 0;

}
