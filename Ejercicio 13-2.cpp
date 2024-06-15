#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

double generarNumAleatorio() {
    return (double)rand() / RAND_MAX * 2.0 - 1.0;
}

void generarPuntoC(double *x, double *y) {
    do {
        *x = generarNumAleatorio(); 
        *y = generarNumAleatorio();
    } while ((*x * *x + *y * *y) > 1.0);
}
int main() {
    srand(time(NULL));
    double x, y; 
    generarPuntoC(&x, &y);
    printf("Punto en el circulo: (x = %f, y = %f)\n", x, y);
    
    return 0;
}

