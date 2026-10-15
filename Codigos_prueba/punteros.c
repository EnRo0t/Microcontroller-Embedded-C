#include <stdio.h>

int main(void) {
		/* Inicializamos variable tipo char: 100 */
		char dato = 100;
		/* Imprimimos la dirección de la variable con especificador de formato %p (pAddress1)*/
		printf("Nuestra variable tipo char tiene la dirección: %p\n", &dato);
        /* Creamos una variable pAddress1 tipo char* con un casting explicito
        para señalar a la dirección de memoria de la variable dato con el
        operador de dirección */
		char* pAddress1 = (char*) &dato;
        /* Creamos una variable para leer un byte de la dirección de memoria
        señalada por el pAddress1 */
		char nDato = *pAddress1;
		printf("El dato almacenado en la variable que señala el pAddress1 es: %c\n", nDato);
        /* Escribir en la dirección que señala el pAddress1 un nuevo valor: 65 */
		*pAddress1 = 65;
        /* Imprimir el valor de la variable inicial */
		printf("Nuestra variable tipo char tiene el valor: %c\n", dato);
		return 0;
}

