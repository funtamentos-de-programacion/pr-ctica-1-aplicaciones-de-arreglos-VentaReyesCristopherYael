#include <stdio.h>

int main() {
    // (a) Declarar una matriz de 2x3 e inicializarla con valores
    int mat[2][3] = {{1, 2, 3}, {4, 5, 6}};
    
    // Imprimir las direcciones de mat, mat[0] y &mat[0][0]
    printf("Dirección de mat:         %p\n", (void*)mat);
    printf("Dirección de mat[0]:      %p\n", (void*)mat[0]);
    printf("Dirección de &mat[0][0]:  %p\n", (void*)&mat[0][0]);

    // Verificar la organización en memoria recorriendo la matriz
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Dirección de mat[%d][%d] (valor %d): %p\n", i, j, mat[i][j], (void*)&mat[i][j]);
        }
    }

    return 0;
}
