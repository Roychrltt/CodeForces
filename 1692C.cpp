#include <iostream>
#include <string>

void solve(void)
{
	char g[9][9];
	for (int i = 1; i <= 8; i++)
		for (int j = 1; j <= 8; j++)
			std::cin >> g[i][j];

	for (int i = 2; i <= 7; i++)
	{
		for (int j = 2; j <= 7; j++)
		{
			if (g[i][j] == '#' && g[i - 1][j - 1] == '#' && g[i - 1][j + 1] == '#' && g[i + 1][j - 1] == '#' &&
					g[i + 1][j + 1] == '#') {
				std::cout << i << " " << j << std::endl;
				return;
			}
		}
	}
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int t;
	std::cin >> t;

	while (t--)
	{
		solve();
	}
	return 0;
}
