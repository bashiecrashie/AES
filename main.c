#include<stdio.h>
#include<string.h>
#include"calcfuncs.h"

//./aes128 text keyphrase
int main(int argc, char *argv[])
{

    const int ByteBlockSize = 16;

    int FirstCounter = 0;

    char InputText[16] = { 0 }, InputKey[16] = { 0 };
    int DecimalInputText[16] = { 0 }, DecimalInputKey[16] = { 0 };
    unsigned char *hex[16] = { 0x0 };

    if(argc != 3)
    {
        printf("Неверное количество аргументов.\n");
        return 1;
    }

    if(strlen(argv[1]) == 0)
    {
        printf("Длина текста не может быть равна нулю.\n");
        return 1;
    }

    if(strlen(argv[2]) == 0 || strlen(argv[2]) > 16)
    {
        printf("Длина ключа не может быть равна нулю или больше 16 символов.\n");
        return 1;
    }

    strcpy(InputText, argv[1]);

    strcpy(InputKey, argv[2]);
    
    for(FirstCounter = 0; FirstCounter < strlen(InputText); ++FirstCounter)
        DecimalInputText[FirstCounter] = InputText[FirstCounter];     

    for(FirstCounter = 0; FirstCounter < strlen(InputKey); ++FirstCounter)
        DecimalInputKey[FirstCounter] = InputKey[FirstCounter];
    
    for(FirstCounter = 0; FirstCounter < strlen(InputText); ++FirstCounter)
        hex[FirstCounter] = dectohexdec(DecimalInputText[FirstCounter]);

    
   // for(FirstCounter = 0; FirstCounter < strlen(InputText); ++FirstCounter)
     //   printf("%x\t", hex[FirstCounter]);


    return 0;
}