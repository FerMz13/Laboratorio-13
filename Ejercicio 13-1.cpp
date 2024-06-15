#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
double generarNumAleatorio() {
    return (double)rand() / RAND_MAX * 2.0 - 1.0;
}
double aproximarPi(int numPuntos) {
    int puntosDentro = 0; 
    double x, y; 

    for (int i = 0; i < numPuntos; ++i) {
        x = generarNumAleatorio(); 
        y = generarNumAleatorio(); 
        if (x * x + y * y <= 1.0) {
            puntosDentro++; 
        }
    }
    return 4.0 * puntosDentro / numPuntos;
}
int main() {
    int numPuntos = 1000000; 
    srand(time(NULL)); 

    double pi = aproximarPi(numPuntos); 
    printf("Aproximacion de Pi: %f\n", pi); 

    return 0;
}

