#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<std::vector<int>> arr(n, std::vector<int>(n, -1));
	int x, y;
	if (n % 2 == 0) x = y = n / 2 - 1;
	else x = y = n / 2;

	arr[x][y] = 0;
	int value = 1, step = 1;

	int dir[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

	while (value < n * n) {
		for (int d = 0; d < 4; ++d)
		{
			int steps = step;
			if (d & 1) step++;

			int dx = dir[d][0], dy = dir[d][1];

			for (int i = 0; i < steps; i++)
			{
				x += dx;
				y += dy;

				if (x >= 0 && x < n && y >= 0 && y < n && arr[x][y] == -1)
					arr[x][y] = value++;

				if (value >= n * n) break;
			}

			if (value >= n * n) break;
		}
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
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
	__Made in France__
}
