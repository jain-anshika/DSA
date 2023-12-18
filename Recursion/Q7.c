// Write a program in C to find the GCD of two numbers using recursion.
#include <stdio.h>
int gcd(int n1, int n2);
int main()
{
    int p1, p2;
    printf("Enter first number: ");
    scanf("%d", &p1);
    printf("\nEnter second number: ");
    scanf("%d", &p2);
    printf("GCD of %d and %d is %d", p1, p2, gcd(p1, p2));
}
int gcd(int n1, int n2)
{
    int s;
    n1 < n2 ? (s = n1) : (s = n2);
    if (s == 1)
        return 1;
    if(n1%s==0 && n2%s==0)
    {
        return s;
    }
    else gcd(s,n2-s);
}