#include <iostream>

int main()
{
	int data[10]{ 0 };
	int N, K;
	int ans = 0;
	std::cin >> N >> K;
	for (int i = 0; i < N; i++)
	{
		std::cin >> data[i];
	}
	int i = N - 1;
	while (i >= 0)
	{
		if (data[i] <= K)
		{
			K -= data[i];
			ans++;
		}
		else
			i--;
	}
	std::cout << ans ;
	return 0;
}