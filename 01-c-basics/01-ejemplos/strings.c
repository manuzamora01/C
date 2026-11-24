#include<stdio.h>
#include<string.h>

void main()
{
    char str1[10];
    char str2[10];

    printf("Enter two strings\n");
    gets(str1);
    gets(str2);

    printf("\nConcatenation of str1 and str2 is %s", strcat(str1, str2));
    printf("\n Length of str1 is %d", strlen(str1));
    printf("\n Length of str2 is %d", strlen(str2));
    printf("\n String uppercase of str1 is %s", strupr(str1));
    printf("\n String uppercase of str2 is %s", strupr(str2));
    printf("\n String lowercase of str1 is %s", strlwr(str1));
    printf("\n String lowercase of str2 is %s", strlwr(str2));
}