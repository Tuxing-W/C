//platinum.c
/*platinum,c -- your weight in platinum*/
#include<stdio.h>
#include <stdlib.h>

int main(void)
{
    float weight;//你的体重
    float value;//同等价值的白金价值

    printf("Are you worth your weight in platinum?\n");
    printf("Let's check it out.\n");
    printf("Please enter your weight in pounds: ");

    scanf("%f", &weight);
    /* 假设白金的价格是每盎司$1700 */
    value = 1700.0 * weight * 14.5833;

    printf("Your weight in platinum is worth $%.4f.\n", value);
    printf("You are easily worth that! If platinum prices drop,\n");
    printf("eat more to maintain your value.\n");

    system("pause");
    return 0;
}