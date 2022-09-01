#include <stdio.h>
#include <stdlib.h>
void countWord(char []);
int main()
{
    char c[20];
    printf("Enter string : ");
    fgets(c,20,stdin);
    countWord(c);
    return 0;
}
void countWord(char s[])
{
    int count=1;
    int l=strlen(s);
    for(int i=0;i<l;i++)
    {
        if(s[i]==' ')
            count++;
    }
    printf("Words in string : %d",count);
}
