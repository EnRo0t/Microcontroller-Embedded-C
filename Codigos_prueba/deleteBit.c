#include <stdio.h>
#include <stdint.h>

int main(void) {
		uint8_t numero;
		uint8_t mask = 199; // Hexadecimal -> C7 | Binario -> 11000111 
		uint8_t resultado;
		printf("Introduce un número: \n");
		scanf("%hhu", &numero);
		resultado = numero & ~mask;
		printf("El resultado de convertir los bits 4,5,6 del número es: %hhu\n", resultado);
		return 0;
}
