#include <iostream>
using namespace std;
int main()
{
	int time;
	cin >> time;
	for (int i = 0; i < time; i++)
	{
		int arr[6]{ 0 };
		int x, y;
		bool xEqual, yEqual;
		for (int j = 0; j < 6; j++)
			cin >> arr[j];
		int distance = arr[2] + arr[5];
		
		if (arr[0] > arr[3])
			x = arr[0] - arr[3];
		else
			x = arr[3] - arr[0];
		if (arr[1] > arr[4])
			y = arr[1] - arr[4];
		else
			y = arr[4] - arr[1];

		xEqual = x == 0;
		yEqual = y == 0;

		if (xEqual && yEqual && arr[2] == arr[5])
			cout << -1 << endl;
		else if (xEqual && yEqual)
			cout << 0 << endl;
		else if (xEqual && y == distance)
			cout << 1 << endl;
		else if (yEqual && x == distance)
			cout << 1 << endl;
		else if (((x << 1) + (y << 1)) == (distance << 1))
			cout << 1 << endl;
		else if (((x << 1) + (y << 1)) >= (distance << 1))
			cout << 0 << endl;
		else if (((x << 1) + (y << 1)) + arr[2] < arr[5])
			cout << 0 << endl;
		else if (((x << 1) + (y << 1)) + arr[5] < arr[2])
			cout << 0 << endl;
		else
			cout << 2 << endl;
	}
	return 0;
}
/* ans
#include <iostream>
using namespace std;
typedef long long ll;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		ll x1, y1, r1, x2, y2, r2;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		ll dx = x1 - x2; ll dy = y1 - y2;
		if (r1 > r2) swap(r1, r2); ll add = r1 + r2;
		add = add * add; ll sub = r2 - r1; sub = sub * sub;
		ll d = dx * dx + dy * dy;

		if (d < add && d > sub)
		{
			cout << 2;
		}
		else if (d == add || (d == sub && d != 0))
		{
			cout << 1;
		}
		else if (d < sub || d > add)
		{ 
			cout << 0;
		}
		else if (d == 0)
		{
			if (r1 == r2) cout << -1;
			else cout << 0;
		} 
		cout << '\n';
	}
	return 0;
}*/
