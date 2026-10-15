#include <stdio.h>

// Declaración de la función
int function_add_numbers(int a, int b, int c) {
    int sum;
    sum = a + b + c;
    return sum;
}

int main() {
    // Llamada a la funcion
    int result = function_add_numbers(1,4,9);
	printf("El resultado es %d\n", result);
	return 0;
}


