#include <stdio.h>

int main() {
    /*(a) Define un arreglo de 5 enteros y asigna valores iniciales.
    (b) Recorre el arreglo con un for e imprime la direccion de cada elemento.
    (c) Analiza si las direcciones son consecutivas y determina la diferencia entre ellas.*/

    int i;
    //(a)Definimos un arreglo de 5 enteros 
    int arr[5] = {1, 2, 3, 4, 5}; 
    int *ptr;
    //Se iguala en al puntero
    ptr = arr;
    //(b) recorremos el arreglo e imprimimos las dirreciones de memoria
	for(i=0;i<5;i++){
		printf("La direccion de memoria de la posicion (%d) es:%x\n",i,(ptr+i));
	}
	/*Al imprimir las direcciones de memoria notamos que entre cada espacio de memoria hay 4 bytes ya que es lo que pesa un entero en la memoria
	posicion (0) es:62fe30
	posicion (1) es:62fe34
	posicion (2) es:62fe38
	posicion (3) es:62fe3c
	posicion (4) es:62fe40
	la posici�n (0) es: 6420600
	la posici�n (1) es: 6420604
	la posici�n (2) es: 6420608
	la posici�n (3) es: 6420612
	la posici�n (4) es: 6420616
	hay que aclarar que depende la computadora la direccion donde se guarda
	*/
	return 0;
}
