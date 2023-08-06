/* print2.c--更多printf()的特性 */
#include <stdio.h>

int main(void)
{
    unsigned int un = 3000000000; /* int为32位和short为16位的系统 */
    short end = 200;
    long big = 65537;
    long long verybig = 12345678908642;

    printf("un = %u and not %d\n", un, un);
    printf("end = %hd and %d\n", end, end);
    printf("big = %ld and not %hd\n", big, big);
    printf("verybig= %lld and not %ld\n", verybig, verybig);
    
    getchar();
    return 0;
}

/*
\a报警ANSI C
\b退格
\f换页
\n换行
\r回车
\t水平制表符
\v垂直制表符
\\反斜杠(\)
\'单引号
\"双引号
\?问好
\0oo八进制(oo必须是有效的八进制数，即每个o可表示0~7)
\xhh十六进制(hh必须是有效的十六进制数，即每个h可表示0~f)
*/