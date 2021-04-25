#include <iostream>
using namespace std;
int main()
{
	int data[100000]{ 0 };
	int N, x, min = 10001, max = 0;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> x;
		for (int j = 0; j <= i; j++)
		{
			if (x < min)
			{
				min = x;
				for (int k = i; k >= 0; k--)
				{
					data[j + k + 1] = data[j + k];
				}
				data[j] = x;
			}
		}
		for (int j = 0; j < N; j++)
		{
			if (data[j] * (N - j) > max)
				max = data[j] * (N - j);
		}
	}
	cout << max;
	return 0;
}