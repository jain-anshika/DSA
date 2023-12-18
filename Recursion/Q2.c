// Write a program in C to calculate the sum of numbers from 1 to n using recursion.
#include<stdio.h>
int sum(int n);
int main()
{
    int num=1;
    printf("The sum of numbers from 1 to 5 : %d", sum(num));
}
int sum(int n)
{
    static int s=0;
    if(n>5)
    {
        return 0;
    }
    else
        s = n + sum(n + 1);
    return s;
}