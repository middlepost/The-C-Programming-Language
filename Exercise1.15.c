#include <stdio.h>

int convert(int x);


int main()
{
	printf("%d\n", convert(100) );
	return 0;
}


int convert(int fahr){
	int celsius;
	celsius = 5 * (fahr - 32) / 9;
	return celsius;
}
