#include <stdio.h>

int main()
{	

	float fahr, celsius; int lower, upper, step;
	lower = 0; 
	upper = 300; 
	step = 20;
	celsius = lower;
	printf("THIS IS MY HEADING!\n");
	while (celsius <= upper) {
		fahr = (celsius * 9/5) + 32; 
		printf("%3.0f %6.1f\n", celsius, fahr); 
		celsius = celsius + step;
			} 

}