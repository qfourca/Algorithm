#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
    int x, y, w, h;
    scanf("%d %d %d %d", &x, &y, &w, &h);
    w -= x; h -= y;
    if (y < x)
        x = y;
    if (h < w)
        w = h;
    if (w < x)
        printf("%d", w);
    else
        printf("%d", x);
    return 0;
}