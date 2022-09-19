/* For this example you must be sure to change the name of the getline function like i did from the example.
Changing it to getliner allowed it to compile, my guess is that there exists a standard library 
function named getline */

/* You must also note that the program is desined to take as input a text file, it is designed in that way
i.e ./a.out < test.txt that is the only way an EOF statement will be achieved using the program. Well that 
way or by using "CTRL + D" */

#include <stdio.h>
#define MAXLINE 1000

int getliner(char line[], int maxline);   /* takes a string/charater array and the value for max size which is 1000 as input */
void copy(char to[], char from[]);          /* takes two strings/character arrays as input */ 

int main()
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];
    max = 0;
    while ((len = getliner(line, MAXLINE)) > 0 )/* since  getline returns a value for the character 
    count of strings, continue to execute while the character count is > 0 */
        if (len > max) {                         /* if a character count returned by getline is greater than 
        the current maximum character count, which is 0 at initialization and changes as the program executes */
            max = len;
            copy(longest, line);            /* copy the new longest string into the array for longest string */
        }
    if (max > 0)
        printf("%s", longest);                  /* print the longest string */
return 0;
}


int getliner(char s[], int lim)
{
    int c, i;

    for (i=0; i<lim-1 && (c=getchar()) !=EOF && c != '\n'; ++i)/* for i = 0 , 
    while the max size (1000) for a string is not passed and characters are still coming 
    and no new line character has been entered continue the loop and keep incrememnting i */
        s[i] = c;               /* input this character into the array for characters */
    if (c == '\n') {                /* if the new line charater is entered */
        s[i] = c;               /* write the newline character at the end of the input stream */
        ++i;                    /* increment the counter for i again */
    }
    s[i] = '\0';                /* assign null pointer to end the character stream */
    return i;                   /* return the number of characters */

}


void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')        /* move from one character array to the second character array until you reach the null poiinter */
        ++i;                            /* increment the value i so that you can move on to the next value in the character array */       
}