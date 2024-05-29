#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int comparador(const void * a, const void * b) {
    return (*(int*)a - *(int*)b);
    
}
bool numRepetido(int numero, int array[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (array[i] == numero) {
            return true;
        }
    }
    
    return false;
    
    
}
int main() {
    int arrayF[6];
    int i = 0;

    srand(time(NULL));

    while (i < 6) {
        int numAleatorio = rand() % 100; 
        
        if (!numRepetido(numAleatorio, arrayF, i)) {
            arrayF[i] = numAleatorio;
            i++;
        }
        
    }
    qsort(arrayF, 6, sizeof(int), comparador);
    
    printf("\nLista em ordem: \n");
    for (i = 0; i < 6; i++) {
        printf("%d ", arrayF[i]);
    }


    return 0;
}
