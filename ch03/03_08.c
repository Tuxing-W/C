/* floaterr.c--演示舍入错误 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float a,b;
    b = 2.0e20 + 1.0;
    a = b - 2.0e20;
    printf("%f \n", a);

    system("pause");
    return 0;
}