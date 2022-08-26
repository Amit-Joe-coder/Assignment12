// 5. Write a recursive function to print first N even natural numbers//
#include <stdio.h>
void E_print(int);
void E_print(int a)
{
    if (a == 0)
    {
        return;
    }
    E_print(a - 2);
    printf("%d ", a);
}

int main()
{
    int x;
    printf("Enter any number: ");
    scanf("%d", &x);
    E_print(x);
}
