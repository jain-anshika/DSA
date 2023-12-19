// Write a program in C to print even or odd numbers in a given range using recursion
#include<stdio.h>
int even(int n);
int odd(int n);

int main()
{
    int num;
    printf("Input the range to print starting from 1 : ");
    scanf("%d",&num);
    printf("All even numbers from 1 to 10 are : ");
        even(num);
        printf("\nAll odd numbers from 1 to 10 are : ");
        odd(num);

}

int even(int n)
{
    static int a = 2;
    if(a>n)
    {
        return 0;
    }
    
    if(a%2==0)
        printf(" %d",a);
    a++;
    even(n);
    
}

int odd(int n)
{
    static int a = 1;
    if (a > n)
    {
        return 0;
    }
    if (a % 2 != 0)
    {
        printf(" %d", a);
    }
    a++;
    odd(n);
}