#include <stdio.h>
#include <stdint.h>

int main(void) {
		// Inicializo dos unsigned ints de 8 bits (0 a 255)
		uint8_t a;
		uint8_t b;
		// Preguntar al usuario: 
		printf("Introduce 2 ints: ");
		// Recogemos los inputs del usuario.
		scanf("%hhu %hhu", &a, &b);
		uint8_t c = a & b;
		uint8_t d = a | b;
		uint8_t e = a ^ b;
		uint8_t f = ~a;

		printf("La operación bitwise '&': %hhu\n",c);
		printf("La operación bitwise '|': %hhu\n",d);
		printf("La operación bitwise '^': %hhu\n",e);
		printf("La operación bitwise '~': %hhu\n",f);

		return 0;	
}
