/* Example explaining basic bitwise operations.
 */
#include <stdio.h>
#include <stdint.h>

/* Print 8bit number in binary.
 */
void print_binary(uint8_t num)
{
    for (int index = 7; index >= 0; index--)
    {

        if (index == 3)
        {
            /* put a space for legibility
             */
            printf(" ");
        }

        /* print the MSB first
         */
        printf("%s", (num & (0x1 << index)) ? "1" : "0");
    }
    printf(" (decimal:%d)\n", num);
}

/* Driver code
 */
int main()
{

    uint8_t a = 100, b = 255;
    uint8_t bAND = a & b;
    uint8_t bOR = a | b;
    uint8_t bXOR = a ^ b;
    uint8_t buNOT = !a;           // bitwise unsigned NOT
    uint8_t bsNOT = ~a;           // bitwise signed NOT
    uint8_t left_shift = b << 1;  // left Shift
    uint8_t right_shift = a >> 1; // right Shift

    printf("\n");

    printf("a= ");
    print_binary(a);
    printf("b= ");
    print_binary(b);
    printf("\n");

    printf("bAND = a & b = ");
    print_binary(bAND);
    printf("bOR  = a | b = ");
    print_binary(bOR);
    printf("bXOR = a ^ b = ");
    print_binary(bXOR);
    printf("\n");

    printf("buNOT = !a = ");
    print_binary(buNOT);
    printf("bsNOT = ~a = ");
    print_binary(bsNOT);
    printf("\n");

    printf("left_shift = b << 1 = ");
    print_binary(left_shift);
    printf("b = ");
    print_binary(b);
    printf("right_shift = a >> 1 = ");
    print_binary(right_shift);
    printf("a = ");
    print_binary(a);
    printf("\n");

    return 0;
}