#include <stdio.h>
#include <stdlib.h>
void checkALpha(char []);
int main()
{
    char c[20];
    printf("Enter string : ");
    scanf("%s",c);
    checkALpha(c);
    return 0;
}
void checkALpha(char s[])
{
    int flag1=0,flag2=0;
    for(int i=0; s[i]; i++)
    {
        if((s[i]>=65 && s[i]<=90)||(s[i]>=97 && s[i]<=122))
            flag1=1;
        if(s[i]>='0'&&s[i]<='9')
            flag2=1;
    }
    if(flag1==1 && flag2==1)
        printf("It is Alphanumeric");
    else
        printf("It is not Alphanumeric");
}
