/* lower: convert c to lower case; ASCII only */ 
#include <stdio.h>
char lower(char c);
char c;

int main()
{
	while ((c = getchar()) != EOF ){
		printf("%c",lower(c));
	}
	return 0;
}


char lower(char c)
{
	return (c >= 'A' && c <= 'Z') ? (c + 'a' - 'A'): c;
}
