#include <stdio.h>
#include <stdlib.h>
int main()
{
    int firPirze, yanPrize, banPrize, X, Y;
    scanf("%d %d %d %d %d", &firPirze, &yanPrize, &banPrize, &X, &Y);
    int fircase = banPrize * (X > Y ? X : Y) * 2;
    int sum;
    int remain;
    int seccase;
    if (firPirze + yanPrize > banPrize * 2)
    {
        sum = (X > Y ? Y : X) * banPrize * 2;
        remain = abs(X - Y);
        //printf("%d\n", remain);
        seccase = sum + remain * (X > Y ? firPirze : yanPrize);
    }
    else
    {
        seccase = 2147483647;
    }
    int thicase = firPirze * X + yanPrize * Y;
    printf("%d", fircase < seccase ? (fircase > thicase ? thicase : fircase) : (seccase > thicase ? thicase : seccase));
    //printf("%d %d %d", fircase, seccase, thicase);
}