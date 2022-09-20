#include <stdio.h>
#define MAXLINE 1000

int getliner(char line[], int maxline);
void reverse(char to[], char from[], int len);


int main()
{
    int len;
    int max;
    char line[MAXLINE];
    char stringg[MAXLINE];

    while ((len = getliner(line, MAXLINE)) > 0){
        reverse(stringg, line, len);
        printf("%s", stringg);
    }
    
return 0;
}


int getliner(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c=getchar()) !=EOF && c != '\n'; ++i)
        if(c == ' ' || c == '\t'){

        }
            
        else
            s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}


void reverse (char to[], char from[], int len)
{
    for (int i = 0; len >= 0; ++i)
    {    
        to[i] = from[len-1];
        --len;
        
    
    }

}

