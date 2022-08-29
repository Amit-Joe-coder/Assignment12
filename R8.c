// 8. Write a recursive function to print binary of a given decimal numbeer//
#include <stdio.h>
void B_num(int);
int main()
{
    int x;
    printf("Enter any number: ");
    scanf("%d", &x);
    B_num(x);
}
void B_num(int a)
{
    if (a / 2 == 0)
    {
        printf("%d", a % 2);
        return;
    }
    B_num(a / 2);
    printf("%d", a % 2);
}
