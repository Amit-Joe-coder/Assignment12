// 10. Write a recursive function to print reverse of a given number//
#include <stdio.h>
void N_reverse(int);
int main()
{
    int x;
    printf("Enter any number: ");
    scanf("%d", &x);
    N_reverse(x);
}
void N_reverse(int a)
{
    if (a / 10 == 0)
    {
        printf("%d", a);
        return;
    }
    printf("%d", a % 10);
    N_reverse(a / 10);
}
