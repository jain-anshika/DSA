// Write a program in C to find the Factorial of a number using recursion.
#include<stdio.h>
int factorial(int n);

int main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d",&num);
    printf("\nFactorial of %d is %d",num,factorial(num));
}

int factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n*(factorial(n-1));
}