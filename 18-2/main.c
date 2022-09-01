#include <stdio.h>
#include <stdlib.h>
void reverseString(char []);
int main()
{
    char c[20];
    printf("Enter String : ");
    scanf("%s",c);
    printf("Reverse String : ");
    reverseString(c);
    return 0;
}
void reverseString(char s[])
{
    int l=strlen(s);
    for(int i=0;i<l/2;i++)
    {
        char temp=s[i];
        s[i]=s[l-i-1];
        s[l-i-1]=temp;
    }
    printf("%s",s);
}
