#include <stdio.h>

int count_digits(int x)
{
    int res = 0;
    while (x > 0)
    {
        x = x / 10;
        res++;
    }
    return res;
}

int main()
{
    printf("------------------------\n");
    printf("count_digits(10):%d\n", count_digits(10));
    printf("count_digits(100):%d\n", count_digits(100));
    printf("count_digits(1000):%d\n", count_digits(1000));
    printf("count_digits(10000):%d\n", count_digits(10000));
    printf("------------------------\n");
}
