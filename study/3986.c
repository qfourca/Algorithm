#include <stdio.h>
#include <string.h>
int main()
{
    int num;
    int good = 0;
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        char string[1000000];
        scanf("%s", string);
        int len = strlen(string);
        char change = 1;
        while (change)
        {
            change = 0;
            for (int i = 0; i < len; i++)
            {
                if (string[i] == 'A' || string[i] == 'B')
                {
                    int j = i + 1;
                    for (; string[j] == 'C'; j++)
                    {
                    }
                    if (string[i] == string[j])
                    {
                        string[i] = 'C';
                        string[j] = 'C';
                        change = 1;
                    }
                    i = j - 1;
                }
            }
        }
        for (int i = 0; i < len; i++)
            if (string[i] != 'C')
            {
                good--;
                break;
            }
        good++;
    }
    printf("%d", good);
}