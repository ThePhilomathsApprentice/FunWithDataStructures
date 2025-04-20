#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

int main()
{
    printf("------------------------\n");
    printf("gcd(12,15)::%d\n", gcd(12, 15));
    printf("gcd(15, 12)::%d\n", gcd(15, 12));
    printf("gcd(20,10)::%d\n", gcd(20, 10));
    printf("------------------------\n");
}
