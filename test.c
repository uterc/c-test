#include <stdio.h>
#include "helper.c"

int main()
{
    printf("Hello World!");

    for (size_t i = 0; i < 60; i++)
    {
        ClearScreen();
        printf("Hello World! %d \n", i);
        Sleep(500);
    }
    return 0;
}