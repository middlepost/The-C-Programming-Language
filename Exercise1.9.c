#include <stdio.h>

/* I am writing notes about this one because the algorithm is beautiful, it is really easy.
if the last character is space then it will not print, and at the end of the while loop 
the present character becomes the last character. if the last character is not space for 
a chase where the given input character is space then it will print. It is so beautiful. 
*/
int main()
{
	int ch, last_ch;

	while ((ch =getchar()) != EOF){
		if (ch == ' '){
		 	if (last_ch != ' ')
		 		putchar(ch);
		}
		else
			putchar(ch);

		last_ch = ch;

		 }

		return 0;
	}
