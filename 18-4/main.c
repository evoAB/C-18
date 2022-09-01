#include <stdio.h>
#include <stdlib.h>
void upperString(char []);
int main()
{
    char c[20];
    printf("Enter string : ");
    scanf("%s",c);
    printf("Uppercase : ");
    upperString(c);
    return 0;
}

void upperString(char s[])
{
    for(int i=0;s[i];i++)
    {
        if(s[i]>=97 && s[i]<=122)
            s[i]-=32;
    }
    printf("%s",s);
}
