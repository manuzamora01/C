#include<stdio.h>
#include<string.h>

void main()
{
    char str1[10];
    char str2[10];

    printf("Enter ONE string\n");
    gets(str1);

    printf("\nString copied to str2 is %s", strcpy(str2, str1));
}