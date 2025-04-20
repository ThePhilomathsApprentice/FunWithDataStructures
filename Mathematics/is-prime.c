#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num)
{
    if (num == 1)
    {
        return false;
    }
    if (num % 2 == 0 ||
        num % 3 == 0)
    {
        return false;
    }

    for (int i = 5; i * i <= num; i += 6)
    {
        if ((num % i == 0) || (num % (i + 2) == 0))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    printf("------------------------\n");
    printf("is_prime(1):%s\n", is_prime(1) ? "YES" : "NO");
    printf("is_prime(2):%s\n", is_prime(2) ? "YES" : "NO");
    printf("is_prime(3):%s\n", is_prime(3) ? "YES" : "NO");
    printf("is_prime(4):%s\n", is_prime(4) ? "YES" : "NO");
    printf("is_prime(5):%s\n", is_prime(5) ? "YES" : "NO");
    printf("is_prime(7):%s\n", is_prime(7) ? "YES" : "NO");
    printf("is_prime(9):%s\n", is_prime(9) ? "YES" : "NO");
    printf("is_prime(7918):%s\n", is_prime(7918) ? "YES" : "NO");
    printf("is_prime(7919):%s\n", is_prime(7919) ? "YES" : "NO");
    printf("is_prime(7921):%s\n", is_prime(7921) ? "YES" : "NO");
    printf("------------------------\n");
}
