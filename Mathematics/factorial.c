#include <stdio.h>

unsigned long long factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    printf("------------------------\n");
    printf("factorial(3)::%lld\n", factorial(3));
    printf("factorial(30)::%lld\n", factorial(30));
    printf("factorial(20)::%lld\n", factorial(20));
    printf("------------------------\n");
}
