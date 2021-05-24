#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
	int cnt = 1;
	for (char x = 1; x != '\0';)
	{
		scanf("%c", &x);
		if (x == ' ')
			cnt++;
	}
	printf("%d", cnt);
}