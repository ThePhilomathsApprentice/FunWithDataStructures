#include <stdio.h>

int trailing_0_factorial(int n)
{
    int result = 0;
    for (int i = 5; i <= n; i*=5)
    {
        result = result + (n / i);
    }
    return result;
}

int main()
{
    printf("------------------------\n");
    printf("trailing_0_factorial(3)::%d\n", trailing_0_factorial(3));
    printf("trailing_0_factorial(20)::%d\n", trailing_0_factorial(20));
    printf("trailing_0_factorial(251)::%d\n", trailing_0_factorial(251));
    printf("------------------------\n");
}
