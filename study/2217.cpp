#include <iostream>

using namespace std;
int main()
{
	int data[100001]{ 0 };
	int N, x, max = 0;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> x;
		for (int j = 0; j <= i; j++)
		{
			if (x < data[j])
			{
				for (int k = i; k >= 0; k--)
				{
					data[j + k + 1] = data[j + k];
				}
				data[j] = x;
				break;
			}
			else
				data[i] = x;
		}
	}

	for (int i = 0; i < N; i++)
	{
		if (max < data[i] * (N - i))
			max = data[i] * (N - i);
	}
	cout<<max;
	return 0;
}

