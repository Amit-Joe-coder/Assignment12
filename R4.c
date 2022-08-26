// 4. Write a recursive function to print first N odd natural numbers in reverse order//
#include <stdio.h>
void R_oddN(int);
int main()
{
    R_oddN(5);
}
void R_oddN(int n)
{
    if (n <= 0)
    {
        return;
    }
    printf("%d",2*n-1);
    R_oddN(n - 1);
   
    
}
