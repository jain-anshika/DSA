//  Write a program in C to print the first 50 natural numbers using recursion
#include<stdio.h>
void natural(int n);

int main()
{
    int num=1;
    printf("The natural numbers are : ");
        natural(num);
}
void natural(int n)
{
    if(n<=50)
    {
        printf("%d  ", n);
        natural(n+1);
    } 
}