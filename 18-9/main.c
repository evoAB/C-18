#include <stdio.h>
#include <stdlib.h>
void reverse(char [],int,int);
int main()
{
    char c[20],start=0,end=0,i=0;
    printf("Enter string : ");
    gets(c);
    int l=strlen(c);

    while(1)
    {
        if(c[i]=='\0')
        {
            reverse(c,start,end-1);
            break;
        }
        if(c[i]==' ')
        {
            reverse(c,start,end-1);
            start=end+1;
        }
        i++;
        end++;
    }
    reverse(c,0,l-1);

    printf("Reversed string : %s",c);
    return 0;
}
 void reverse(char s[],int b, int e)
 {
     while(b<=e)
     {
         char temp=s[b];
         s[b]=s[e];
         s[e]=temp;

        b++;
        e--;
     }
 }
