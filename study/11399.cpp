#include <iostream>

int main()
{
	int data[1000]{ 0 };
	int N;
	int ans = 0;
	std::cin >> N;
	for (int i = 0; i < N; i++)
		std::cin >> data[i];
	for (int i = N - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (data[j] > data[j + 1])
			{
				int t = data[j];
				data[j] = data[j + 1];
				data[j + 1] = t;
			}
		}
	}
	int j = 0;
	for (int i = 1; i < N + 1; i++)
	{
		ans += data[j] * i;
		j++;
	}
	std::cout << ans;
	return 0;
}