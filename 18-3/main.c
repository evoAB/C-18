#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c1[20],c2[20];
    printf("Enter first string : ");
    scanf("%s",c1);
    printf("Enter second string : ");
    scanf("%s",c2);
    if(strcmp(c1,c2)==0)
        printf("Strings are same");
    else
        printf("Strings are not same");
    return 0;
}
