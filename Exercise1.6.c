
#include <stdio.h>
#include <stdlib.h>

int main(){

	printf("i am working");
	int c;
	c = (getchar() != EOF);

	while (1 == 1) {
		if (c == 0)
			printf ("C IS = 0");

			else if ( c == 1)
				printf("\nC IS = 1");

		else
			printf("C IS NOT");
	}

	return 0; 
	
}
















// int main()
// {
// int c;
// while ((c = getchar()) != EOF) {

// 	putchar (c) ;
// 	return 0;

// }

// 	}


// #include <stdio.h>

// int main(){
// 	int c;
// 	c = (getchar() != EOF);
// 	printf("%d",c);
// 	return 0;
// }