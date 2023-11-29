#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int isPrime(int);
int main()
{
    int n;
    scanf("%d", &n);
    if (isPrime(n) == 1)
    {
        printf("Prime Number");
    }
    else
    {
        printf("Not Prime Number");
    }
    return 0;
}
int isPrime(int a)
{
    int collect = 0;
    for (int i = 2; 1 <= a; i++)
    {
        if (a % i == 0)
        {
            collect++;
        }
        return collect;
    }
}