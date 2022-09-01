#include <stdio.h>
#include <stdlib.h>
void countLen(char []);
int main()
{
    char c[20];
    printf("Enter string : ");
    scanf("%s",c);
    countLen(c);
    return 0;
}
void countLen(char s[])
{
    int count=0;
    for(int i=0;s[i];i++)
        count++;
    printf("Length of string : %d",count);
}
