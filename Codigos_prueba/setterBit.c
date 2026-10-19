#include <stdio.h>
#include <stdint.h>

int main(void) {
		uint8_t mask = 72; // 01001000
		uint8_t numero;
		uint8_t resultado;
		printf("Introduce un número\n");
		scanf("%hhu", &numero);
	    resultado = mask | numero;
		printf("El resultado de alterar los bits 7 y 4 es: %hhu\n", resultado);
		return 0;	
}
