// Write a program in C to convert a decimal number to binary using recursion.
#include<stdio.h>
int binary(int n);

int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("\nBinary representation of %d is :%d\n",num,binary(num));
}

int binary(int n)
{
    if(n==0)
    {
        return 0;
    }
    else 
    return (n%2) + 10*binary(n/2);
}