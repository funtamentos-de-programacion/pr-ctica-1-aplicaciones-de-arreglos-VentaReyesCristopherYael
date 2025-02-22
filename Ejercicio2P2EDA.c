#include <stdio.h>

int main() {
    /*(a) Declara un arreglo de 3 enteros y asigna valores iniciales.
	(b) Imprime las direcciones de arr y &arr[0].
	(c) Explica la relacion entre ambas direcciones y su significado en memoria*/
	//Declarar arreglo (a)
	int arr[3]={1,2,3};
	int *ptr;
	ptr = arr;
	//(b) Imprimir las direcciones de arr y &arr[0].
	printf("%x\n",ptr);
	printf("%x",&arr[0]);
	//Se relacionan (son las mismas) ya que ambos ptr apunta a la direccion de memoria de arr en la posicion 0 (la inicial)
	return 0;
}
