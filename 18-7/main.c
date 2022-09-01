#include <stdio.h>
#include <stdlib.h>
void checkPali(char []);
int main()
{
    char c[20];
    printf("Enter String : ");
    scanf("%s",c);
    checkPali(c);
    return 0;
}
void checkPali(char s[])
{
    int flag=0;
    int l=strlen(s);
    for(int i=0;i<l/2;i++)
    {
        if(s[i]!=s[l-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("It is Palindrome");
    else
        printf("It is not Palindrome");
}
