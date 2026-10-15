#include <stdio.h>

int main() {
	
    unsigned char distAB = 160;
    unsigned char distBC = 40;
    unsigned char distAC = distAB + distBC;
    printf("The distance between A and C is: %d\n", distBC);
	return 0;
}
