//two function
#include<stdio.h>

void butler(void)
{
    printf("You rang,sir?\n");
}

void butler(void);

int main(void)
{
    printf("I will summon the butler function.\n");
    butler();
    printf("Yes,Bring me some tea and writeable DVDs.\n");

    getchar();
    return 0;
}