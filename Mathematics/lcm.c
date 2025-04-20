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

int lcm(int a, int b)
{
    return (a * b) / (gcd(1, b));
}

int main()
{
    printf("------------------------\n");
    printf("lcm(4,6)::%d\n", lcm(4, 6));
    printf("lcm(15, 12)::%d\n", lcm(15, 12));
    printf("lcm(20,10)::%d\n", lcm(20, 10));
    printf("------------------------\n");
}
