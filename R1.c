//1. Write a recursive function to print first N natural numbers//
#include<stdio.h>
void NaturalNum(int);
int main()
{
    int x;
    printf("Enter any Number: ");
    scanf("%d",&x);
    NaturalNum(x);
}
void NaturalNum(int a)
{
    if (a==0)
    {
        return;
    }
    NaturalNum(a-1);
    printf("%d",a);
}