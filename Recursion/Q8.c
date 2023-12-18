#include <stdio.h>

int large(int a[5], int n, int i);
int main()
{
    int arr[5], no = 5;
    printf("Enter elements in the array: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The largest element in the array is: %d", large(arr, no - 1, 0));
}

int large(int a[5], int n, int i)
{
    static int l = 0;

    if  (i > n)
    {
        return l;
    }

    if (l < a[i])
    {
        l = a[i];
    }

    return large(a, n, i + 1);
}
