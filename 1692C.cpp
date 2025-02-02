#include <iostream>
#include <string>

void solve(void)
{
	int prevCount = 0;
	int x = -1, y = -1, b = -1;
	std::string s;
	std::getline(std::cin, s);
	for (int i = 0; i < 8; i++) {
		std::getline(std::cin, s);
		int count = 0;
		for (int j = 0; j < 8; j++) {
			if (s[j] == '#')
			{
				b = j + 1;
				count++;
			}
		}
		if (prevCount == 2 && count == 1 && x == -1)
		{
			x = i + 1;
			y = b;
		}
		prevCount = count;
	}
	std::cout << x << " " << y << std::endl;
}

int main()
{
	int t;
	std::cin >> t;
	std::cin.ignore();

	while (t--)
	{
		std::cin.ignore();
		solve();
	}
	return 0;
}
