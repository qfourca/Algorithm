#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
	int cnt = 0, x, a, b, c;
	scanf("%d", &x);
	a = x;
	do
	{
		b = a % 10;
		c = (a / 10 + a % 10) % 10;
		a = 10 * b + c;
		cnt++;
	}while (a != x);
	printf("%d", cnt);
	return 0;
}