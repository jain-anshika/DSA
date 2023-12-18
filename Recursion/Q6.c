// Write a program in C to find the sum of digits of a number using recursion.
#include <stdio.h>
int sum(int n);
int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    printf("Sum of digits in this number is: %d", sum(num));
}

int sum(int n)
{
    static int s = 0;
    if (n == 0)
    {
        return 0;
    }
    else
    {
        s+= (n%10);
        sum(n / 10);
    }
    return s;
}