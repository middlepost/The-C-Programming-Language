#include <stdio.h>
#define MAXLINE 1000

int getliner(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
    int len;
    int max;
    char line[MAXLINE];
    char notabs[MAXLINE];

    while ((len = getliner(line, MAXLINE)) > 0){
        copy(notabs, line);
        printf("%s", notabs);    
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


void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}