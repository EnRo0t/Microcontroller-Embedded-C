#include <stdio.h>
#include <stdint.h>

int main(void) {
		uint8_t a;
		uint8_t b = 1;
		uint8_t resultado;
		printf("Introduce un número\n");
		scanf("%hhu", &a);
		resultado = a & b;
		if(resultado) {
				printf("En numero es impar");
		} else {
				printf("El número es par");
		}
		return 0;
}
