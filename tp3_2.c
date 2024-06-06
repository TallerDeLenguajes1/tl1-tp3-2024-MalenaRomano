#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FILA 5
#define COLUMNA 12

int main(){
    int matriz[FILA][COLUMNA];
    int valMx= 0, valMn = 50000, mesMx=0, mesMn =0, anioMx =0, anioMn =0;

    //cargo la matriz con valores aleatorios
    srand(time(NULL));
    for (int i = 0; i < FILA; i++){ //bucle para los años
        double suma = 0; //double para calcular el promedio como punto flotante
        for (int j = 0; j < COLUMNA; j++){ //buble para los meses
            matriz[i][j] = rand() %40001 + 10000;
            printf(" %5d", matriz[i][j]);

            //busco el valor maximo:
            if (matriz[i][j] > valMx){
                valMx = matriz[i][j];
                mesMx = j +1;
                anioMx = i +1;
            }

            //busco el valor minimo
            if (matriz[i][j] < valMn)
            {
                valMn = matriz[i][j];
                mesMn = j +1;
                anioMn = i + 1;
            }
            suma += matriz[i][j];
            
        }
        double promedio = suma / COLUMNA;
        printf("|\n");
        printf ("Promedio anio %d: %2f\n", i+1, promedio);
        
    }
    printf("Valor maximo: %d\n Mes: %d\n Anio: %d\n", valMx, mesMx, anioMx);
    printf("Valor minimo: %d\n Mes: %d\n Anio: %d\n", valMn, mesMn, anioMn);
    return 0;
}