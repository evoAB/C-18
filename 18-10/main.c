#include <stdio.h>
#include <stdlib.h>
void dupString(char [],int);
int main()
{
    char c[20];
    printf("Enter string : ");
    scanf("%s",c);
    int l=strlen(c);
    printf("Repeated Characters : ");
    dupString(c,l);
    return 0;
}
void dupString(char s[],int l)
{
    int freq[123]={0};
    for(int i=0; i<l; i++)
    {
        freq[s[i]]++;
    }
    for(int i=0; i<123; i++)
        if(freq[i]>1)
            printf(" %c",i);
}
