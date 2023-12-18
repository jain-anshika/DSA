// Write a program in C to count the digits of a given number using recursion.
#include<stdio.h>
int count(int n);
int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    printf("Number of digits in this number is: %d", count(num));
}

int count(int n)
{
     static int c=0;
    if (n == 0)
    {
        return 0;
    }
    else 
    {
        c++; 
        count(n/10);
    }
    return c;
}