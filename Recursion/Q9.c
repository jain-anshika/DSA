// Write a program in C to reverse a string using recursion.
#include <stdio.h>
#include <string.h>
void reverse(char s[], int l);

int main()
{
    char c[50];
    printf("Enter any string: \n");
    scanf("%s", &c);
    int length = strlen(c);
    printf("Reversed String is: ");
    reverse(c, length);
}

void reverse(char s[], int l)
{
    if (l == 0)
    {
        printf("%c",s[l]);
    }
    else 
    {
        printf("%c",s[l]);
        reverse(s, l - 1);
    }
    
}