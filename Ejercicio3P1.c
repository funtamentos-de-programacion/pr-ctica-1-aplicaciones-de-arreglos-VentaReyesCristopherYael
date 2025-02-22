#include <stdio.h>

int main() {
    /*(a) Declara una matriz int mat[2][3] e inicializala con valores.
	(b) Usa dos for anidados para recorrer la matriz y mostrar las direcciones de memoria de cada posicion. �
	(c) Analiza como estan organizados los datos y si el almacenamiento es contiguo.*/
	//(a) inicializar matriz
	int mat[2][3]={{1,2,3},{1,2,3},};
	int i,j;
	//For anidados donde se muestran las dirreciones de memoria
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("La direccion de memoria de la pocision [%i][%i] con valor %i es:%x\n",i,j,mat[i][j],&mat[i][j]);
		}
	}
	/*
	La direccion de memoria de la pocision [0][0] con valor 1 es:62fe30
	La direccion de memoria de la pocision [0][1] con valor 2 es:62fe34
	La direccion de memoria de la pocision [0][2] con valor 3 es:62fe38
	La direccion de memoria de la pocision [1][0] con valor 1 es:62fe3c
	La direccion de memoria de la pocision [1][1] con valor 2 es:62fe40
	La direccion de memoria de la pocision [1][2] con valor 3 es:62fe44
	Aumenta de 4 en 4 bytes*/
	return 0;
}
