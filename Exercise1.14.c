#include <stdio.h>

void counter(int i);
int ndigit[10];

int main()

{	int c, i, nwhite, nother; 
	nwhite = nother = 0;
	for (i = 0; i < 10; ++i)
	ndigit[i] = 0;
	while ((c = getchar()) != EOF) 
		if (c >= '0' && c <= '9'){    	
			++ndigit[c-'0'];
		}
		else if (c == ' ' || c == '\n' || c == '\t'){   
		    ++nwhite;
		}
		else{	
			++nother;
		}

	for (int i = 0; i < 10; ++i){	
     	if((ndigit[i]) != 0){
     		printf("\n%d |", i);
     		counter(i);
     		printf("\n"); 		 		
     	}
	}
}

void counter(int i){

	for (i = i; ndigit[i]!=0; --ndigit[i])
	{
		printf("*");
	}

}






























