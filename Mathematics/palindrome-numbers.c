#include <stdio.h>

int is_palindrome(int n)
{
    int reverse = 0;
    int temp = n;
    while (temp != 0)
    {
        int last_digit = temp % 10;
        reverse = reverse * 10 + last_digit;
        temp = temp / 10;
    }
    return (reverse == n);
}

int main()
{
    printf("------------------------\n");
    printf("is_palindrome(1001)::%s\n", is_palindrome(1001)?"YES":"NO");
    printf("is_palindrome(100):%s\n", is_palindrome(100)?"YES":"NO");
    printf("is_palindrome(5667):%s\n", is_palindrome(5667)?"YES":"NO");
    printf("is_palindrome(5):%s\n", is_palindrome(5)?"YES":"NO");
    printf("------------------------\n");
}
