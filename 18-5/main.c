#include <stdio.h>
#include <stdlib.h>
void lowerString(char []);
int main()
{
    char c[20];
    printf("Enter string : ");
    scanf("%s",c);
    printf("Lowercase : ");
    lowerString(c);
    return 0;
}

void lowerString(char s[])
{
    for(int i=0;s[i];i++)
    {
        if(s[i]>=65 && s[i]<=90)
            s[i]+=32;
    }
    printf("%s",s);
}
