#include <stdio.h>

int main(void) {
		// Creamos las variables que almacenaran los datos
		char c1,c2,c3,c4,c5,c6;
		printf("Introduce 6 carácteres: ");
		// Escaneamos lo introducido por el usuario y lo almacenamos en las variables
		scanf("%c %c %c %c %c %c", &c1,&c2,&c3,&c4,&c5,&c6);
		// Imprimimos por pantalla los unisgned int equivalente a las variables
		printf("\nASCII codes: %u,%u,%u,%u,%u,%u\n", c1,c2,c3,c4,c5,c6);

		printf("Dale ENTER para salir\n");
		while(getchar() != '\n') {

		}
		getchar();
}
