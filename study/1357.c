#include <stdio.h>
int rev(int n)
{
    int sum = 0;
    while (n)
    {
        sum = sum * 10 + n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    int X, Y;
    scanf("%d %d", &X, &Y);
    printf("%d", rev(rev(X) + rev(Y)));
}