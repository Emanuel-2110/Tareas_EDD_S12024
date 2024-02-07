#include <iostream>

using namespace std;

int main(){

    //Complejidad constante O(1)
    int cantidad;
    int aux;


    cout << "Ingresa la cantidad de numeros a Ordenar" << endl;
    cin >> cantidad;

    int numeros[cantidad];

    cout << "El arreglo será de " <<cantidad <<" numeros" << endl;

    //Complejidad lineal = O(n) donde n es la cantidad de numeros ingresados
    cout << "Ingrese los numeros" << endl;
    for (int i = 0; i < cantidad; ++i) {
        int numeroTemp;
        cout << "Numero " << i + 1 <<": ";
        cin >> numeroTemp;
        numeros[i] = numeroTemp;
    }

    //Complejidad lineal = O(n)
    cout << "Arreglo antes del Ordenamiento" << endl;
    for (int i = 0; i < cantidad; ++i) {
        cout  << numeros[i] << " ";
    }
    cout << endl;

    //La complejidad de los bucles internos y externo es O(n*n) = O(n^2) lo cual representa
    //una complejidad cuadratica
    //Ordenamientos Metodo Burbuja
    for (int i = 0; i < cantidad; ++i) {
        for (int j = 0; j < cantidad ; ++j) {
            if (numeros[j] > numeros[j + 1]) {
                aux = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = aux;

            }
        }
    }

    //La complejidad es O(n) porque sus iteraciones son n veces.
    cout << "Arreglo después del Ordenamiento" << endl;
    for (int i = 0; i < cantidad; ++i) {
        cout  << numeros[i] << " ";
    }
    cout << endl;


}
