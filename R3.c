// 3. Write a recursive function to print first N odd natural numbers//
#include <stdio.h>
void oddN(int);
int main()
{
    int x;
    printf("Enter any Number: ");
    scanf("%d",&x);
    oddN(x);
    return 0;
}
void oddN(int n)
{
    if (n == 0)
    {
        return;
    }
    oddN(n - 1);
    printf("%d ", 2 * n - 1);
}
