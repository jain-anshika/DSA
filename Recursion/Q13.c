// Write a program in C to find the LCM of two numbers using recursion.
#include<stdio.h>
int lcm(int n1,int n2);

int main()
{
    int num1,num2;
    printf("Enter two numbers: ");
    scanf("%d%d",&num1,&num2);
    printf("LCM of %d and %d is: %d",num1,num2,lcm(num1,num2));
}

int lcm(int n1, int n2)
{
    if ((n1 * n2) == 0)
        return 0;
    static int m=0;
    if(m==0)
    {
        m = (n1 < n2) ? n1 : n2;
    }
    else if((m%n1==0) && (m%n2==0)) 
    {
        return m;
    }
    m++;
    lcm(n1,n2);

}