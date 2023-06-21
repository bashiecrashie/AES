#include<string.h>
#include<stdio.h>

unsigned char *dectohexdec(int decimal)
{
    static unsigned char hex[320] = { 0x0 };

    int i = 10, remain[10] = { 0 };

    while(decimal != 0)
    {
        remain[i] = decimal % 16;
        decimal = decimal / 16;
        --i;
        
    }

    for(int i = 10; i > 0; --i)
    {
        printf("%d", remain[i]);
    }

    return hex;    
}