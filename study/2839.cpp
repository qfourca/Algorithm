#include <iostream>

int main()
{
	int input = 0;
	int ans = 0;
	std::cin >> input;
	for (int i = 0; input > 0; i++)
	{
		if (input % 5 == 0)
			input -= 5;
		else if (input % 3 == 0)
			input -= 3;
		else if (input > 5)
			input -= 5;
		else
		{
			ans = -2;
			break;
		}
		ans = i;
	}
	std::cout << ans+1;
	return 0;
}