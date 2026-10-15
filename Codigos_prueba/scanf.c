#include <stdio.h>

int main(void) {
	    float a, b, c;
		float r;

		printf("Introduce el primer número:\n");
        fflush(stdout);
		scanf("%f", &a);
		printf("Introduce el segundo número:\n");
		scanf("%f", &b);
		printf("Introduce el tercer y último número:\n");
		scanf("%f", &c);
		r = (a+b+c)/3;
		printf("El resultado de la media de los 3 valores es: %0.1f\n", r);
        printf("Presiona ENTER para salir del programa\n");
        while(getchar() != '\n') {

        }
        getchar();
}

