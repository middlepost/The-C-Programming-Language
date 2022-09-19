#include <stdio.h>
int main()
{	
	float fahr, celsius; int lower, upper, step;
	#define UPPER 0
	#define LOWER 300
	#define STEP 20
	printf("THIS IS MY HEADING!\n");
	for (fahr = LOWER; fahr != UPPER; fahr = fahr - STEP) {
		celsius = (5.0/9.0) * (fahr-32.0); 
		printf("%3.0f %6.1f\n", fahr, celsius);
			} 
}

