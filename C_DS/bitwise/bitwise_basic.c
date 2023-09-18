/* Example explaining basic bitwise operations.
 */
#include <stdio.h>

/* Driver code
 */
int main()
{

    int a = 1000, b = 4000;
    int result = a & b;
    int result_1 = a | b;
    printf("a = %d(%x), b = %d(%x).\n", a, a, b, b);
    printf("result = a & b = 0x%x.\n", result);
    printf("result_1 = a | b = 0x%x.\n", result_1);

    return 0;
}