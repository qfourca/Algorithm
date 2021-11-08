#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <deque>
#include <algorithm>
#include <iostream>

int main()
{
    int asdf;
    scanf("%d", &asdf);
    for (int k = 0; k < asdf; k++)
    {
        char string[1000000];
        std::deque<int> arr;
        for (int i = 0; i < 1000000; i++)
            string[i] = 0;
        scanf("%s", string);
        int len;
        scanf("%d", &len);
        char trash;
        getchar();
        getchar();
        int begin = 0;
        for (int i = 0; i < len; i++)
        {
            int temp;
            std::cin >> temp >> trash;
            arr.push_back(temp);
        }
        getchar();
        bool reverse = false;
        bool error = false;
        int stringlen = strlen(string);
        for (int i = 0; i < stringlen; i++)
        {
            //printf("%d%c", i, string[i]);
            if (string[i] == 'R')
                reverse = !reverse;
            else
            {
                if (arr.empty())
                {
                    error = true;
                    break;
                }
                if (reverse)
                    arr.pop_back();
                else
                    arr.pop_front();
            }
        }
        if (!error)
        {
            printf("%c", '[');
            if (reverse)
            {
                for (int i = arr.size() - 1; 0 <= i; i--)
                {
                    std::cout << arr.at(i);
                    if (i != 0)
                        printf("%c", ',');
                }
            }
            else
            {
                for (int i = 0; i < arr.size(); i++)
                {
                    std::cout << arr.at(i);
                    if (i != arr.size() - 1)
                        printf("%c", ',');
                }
            }
            printf("]\n");
        }
        else
        {
            printf("error\n");
        }
    }
}
