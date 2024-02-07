#include <iostream>
using namespace std;

void procedimiento_burbuja(int arr[], int tamano);
void imprimir(int arr[], int tamano);

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    cout << "Lista desordenada: ";
    imprimir(arr, size(arr));
    cout << "Lista ordenada: ";
    procedimiento_burbuja(arr, size(arr));


    return 0;
}
// la complejidad algoritmica es de O(n*n) o O(n^2)
void procedimiento_burbuja(int arr[], int tamano) {
    for (int i = 0; i < tamano - 1; i++) {  // n
        for (int j = 0; j < tamano - i - 1; j++)  { //n
            if (arr[j] > arr[j + 1]) { // 1
                int aux = arr[j];      // 1 o 0
                arr[j] = arr[j + 1];   // 1 o 0
                arr[j + 1] = aux;      // 1 o 0
            }
        }
    }
    imprimir(arr, tamano);
}

// la complejidad es de O(n)
void imprimir(int arr[], int tamano) {
    for (int i = 0; i < tamano; i++) {
        cout << arr[i] << " ";  // 1
    }
    cout << endl; //1
}
