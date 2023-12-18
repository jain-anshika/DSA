// Write a program in C to print the array elements using recursion.
#include<stdio.h>
int array(int arr[], int n);
int main()
{
    int a[]={2,4,6,8,10,12},n=0;
    printf("Elements of Array are:\n");
    array(a,n);
}
int array(int arr[], int n){
    if (n<6) 
    {
        printf("%d\t",arr[n]);
        array(arr,n+1);
    }
}