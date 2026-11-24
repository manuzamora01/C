#include<stdio.h>

int mult(int a, int b) //User defined Function
{
    return a*b;
}

int add(int x, int y)
{
    return x+y;
}

void main()
{
    printf("Product is %d", mult(5,10));
    printf("\nSum is %d", add(6,5));
}