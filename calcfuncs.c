#include<string.h>
#include<stdio.h>

char *dectohexdec(int decimal)
{
    static char hex[320] = { 0 };
    sprintf(hex, "%x", decimal);   
    return hex;    
}