// 2. Write a recursive function to print first N natural numbers in reverse order//
#include <stdio.h>
void printN(int);
int main()
{
    printN(10);
    return 0;
}
void printN(int n)
{
    if (n > 0)
    {
        printf("%d\n", n);
        printN(n - 1);
    }
}
