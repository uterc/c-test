#include <stdio.h>
#include "helper.c"
#include <conio.h>

int main()
{
    // declare variable
    char ch;
    char arr[3][10] = {"Geek", "Geeks", "Geekfor"};
    int index = 0;
    printf("Enter key ESC to exit \n");
    // define infinite loop for taking keys
    while (1)
    {

        if (kbhit)
        {
            // fetch typed character into ch
            ch = getch();
            if ((int)ch == 80)
            {
                if (index < sizeof(arr) / sizeof(arr[0]))
                {
                    index = index + 1;
                }
            }
            if ((int)ch == 72)
            {
                if (index > 0)
                {
                    index = index - 1;
                }
            }
            printf("%s", arr[index]);
            // printf("%d", sizeof(arr));
            if ((int)ch == 27)
                // when esc button is pressed, then it will exit from loop
                break;
            // printf("You have entered : %i\n", ch);
        }
    }

    // for (size_t i = 0; i < 60; i++)
    // {
    //     ClearScreen();

    //     printf("Hello World! %d \n", i);
    //     Sleep(500);
    // }
    return 0;
}