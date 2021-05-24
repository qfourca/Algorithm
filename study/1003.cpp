#include <iostream>
using namespace std;
int zeroCall, oneCall;
int fibo(int n)
{
	if (n == 0 || n == 1)
	{
		switch (n)
		{
		case 0: zeroCall++; break;
		case 1: oneCall++; break;
		}
		return n;
	}
	else
		return fibo(n - 1) + fibo(n - 2);
}
int main()
{
	int times;
	cin >> times;
	for (int i = 0; i < times; i++)
	{
		int x = 0;
		cin >> x;
		fibo(x);
		cout << zeroCall << ' ' << oneCall << '\n';
		zeroCall = 0;
		oneCall = 0;
	}
	return 0;
}
