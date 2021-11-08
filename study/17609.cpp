#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>
// char isYousaPalind(char *input)
// {
//     for (int i = 0; i < strlen(input); i++)
//     {
//         char arr[100005];
//         strcpy(arr, input);
//         deleteChar(arr, i);
//         if (isPalind(arr))
//             return 1;
//     }
//     return 0;
// }
// int main()
// {
//     char str[31][100005];
//     int input = 1;
//     scanf("%d", &input);
//     for (int i = 0; i < input; i++)
//     {
//         scanf("%s", str[i]);
//     }
//     for (int i = 0; i < input; i++)
//     {
//         int ans;
//         if (isPalind(str[i]))
//             ans = 0;
//         else if (isYousaPalind(str[i]))
//             ans = 1;
//         else
//             ans = 2;
//         printf("%d\n", ans);
//     }
//     return 0;
// }

bool isPalind(char *input)
{
    // printf("%s ", input);
    int max = strlen(input);
    for (int i = 0; i < strlen(input) / 2; i++)
        if (input[i] != input[strlen(input) - (i + 1)])
            return false;
    return true;
}
void remove(char *input, int idx)
{
    int len = strlen(input);
    for (int i = idx; i < len; i++)
        input[i] = input[i + 1];
}
int main()
{
    int num;
    char array[1000000];
    scanf("%d", &num);
    for (int asd = 0; asd < num; asd++)
    {
        bool printZero = true;
        char str[1000000];
        scanf("%s", str);
        int len = strlen(str);
        for (int i = 0; i < len / 2; i++)
        {
            if (str[i] != str[len - (i + 1)])
            {
                char str2[1000000];
                strcpy(str2, str);
                remove(str, i - 1);
                remove(str2, len - i - 1);
                if (isPalind(str) || isPalind(str2))
                {
                    array[asd] = '1';
                    printZero = false;
                    break;
                }
                else
                {
                    array[asd] = '2';
                    printZero = false;
                    break;
                }
            }
        }
        if (printZero)
            array[asd] = '0';
    }
    for (int i = 0; i < num; i++)
        printf("%c\n", array[i]);
}
