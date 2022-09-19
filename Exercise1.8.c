#include <stdio.h>
int main()
{
	int c, newline, blank, tab;
	newline = 0;
	blank = 0;
	tab = 0;
	while ((c =getchar()) != EOF){
		if (c == '\n'){
			++newline;
			printf ("NEW LINE = %d\n", newline);
		}
			else if (c == ' '){
				++blank;
				printf("WHITESPACE = %d\n", blank);
			}
			else if (c == '\t'){
				++tab;
				printf("TAB = %d\n", tab);
			}
	}

	return 0;
}