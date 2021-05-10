#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fibo(long long num)
{
    if (num <= 0)
        return 0;
    else if (num == 1)
        return 1;
    return fibo(num - 2) + fibo(num - 1);
}

int main(void) 
{

  
    int a = 0;
    scanf("%d", &a);
    printf("%d", a - 543);
    return 0;

}