#include <stdio.h>
int main()
{
    int len;
    int arr[100];
    int time;
    scanf("%d", &len);
    for (int i = 0; i < len; i++)
    {
        scanf("%d ", &arr[i]);
    }
    scanf("%d", &time);
    int temp = 0;
    for (int i = len - 1; i > 0; i--)
        for (int j = 0; j < i; j++)
            if (arr[j] < arr[j + 1])
            {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
                if (++temp == time)
                {
                    for (int k = 0; k < len; k++)
                        printf("%d ", arr[k]);
                    return 0;
                }
            }

    for (int k = 0; k < len; k++)
        printf("%d ", arr[k]);
}