#include <iostream>
using namespace std;
int zeroCall, oneCall;
int fibo(int n)
{
	if (n == 0)
	{
		zeroCall++;
		return 0;
	}
	else if (n == 1)
	{
		oneCall++;
		return 1;
	}
	else
	{
		return fibo(n - 1) + fibo(n - 2);
	}
}
int main()
{
	int arr[10000];
	int times;
	cin >> times;
	for (int i = 0; i < times; i++)
	{
		cin >> arr[i];
	}
	printf("\n");
	for (int i = 0; i < times; i++)
	{
		fibo(arr[i]);
		printf("%d %d\n", zeroCall, oneCall);
		zeroCall = 0;
		oneCall = 0;
	}
}
