#include <stdio.h>
#include <string.h>
int main()
{

    int array[32];
    for (int i = 0; i < 32; i++)
        array[i] = 0;

    for (;;)
    {
        char data;
        scanf("%c", &data);
        if (data == '\n')
            break;
        if (data > 91)
            array[data - 97]++;
        else
            array[data - 65]++;
    }

    int big = 0;
    char printbig;
    char issame = 0;
    for (int i = 0; i < 32; i++)
    {
        if (array[i] > big)
        {
            big = array[i];
            printbig = i + 65;
            issame = 0;
        }
        else if (array[i] == big)
        {
            issame = 1;
        }
    }

    if (issame)
        printf("?");
    else
        printf("%c", printbig);
}