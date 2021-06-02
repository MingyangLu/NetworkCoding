#include <stdio.h>
#include <stdlib.h>
//测试当前OS的字节序
//大端字节序还是小端字节序
int main()
{
    union
    {
        int s;
        char c[sizeof(int)];
    } un;
    un.s = 0x01020304;
    if ( sizeof(int) == 4 )
    {
        printf("0:%d,1:%d,2:%d,3:%d\n", un.c[0],un.c[1],un.c[2],un.c[3]);
        
    }
    else
        printf("sizeof(short) = %d\n", sizeof(short));
    exit(0);
}