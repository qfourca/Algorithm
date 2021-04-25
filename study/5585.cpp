#include <iostream>

int main()
{
	int pay = 0;
	std::cin >> pay;
	pay = 1000 - pay;
	int money[6]{ 500,100,50,10,5,1 };
	int i = 0;
	int ans = 0;
	while (i < 6)
	{
		if (pay >= money[i])
		{
			pay -= money[i];
			ans++;
		}
		else
			i++;
	}
	std::cout << ans;
	return 0;

}