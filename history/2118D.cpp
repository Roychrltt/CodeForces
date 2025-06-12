#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(int n, int k, std::vector<long long int>& p, std::vector<long long int> d)
{
	int dir = 1;
	long long int pos;
	std::cin >> pos;
	std::vector<int> vis1(n);
	std::vector<int> vis2(n);
	long long int time = 0;
	while (1)
	{
		if (dir == 1)
		{
			if (pos > p[n - 1])
			{
				std::cout << "YES" << std::endl;
				return;
			}
			for (int i = 0; i < n; i++)
			{
				if (p[i] < pos) continue;
				time += p[i] - pos;
				pos = p[i];
				if (time % k != d[i] && i == n - 1)
				{
					std::cout << "YES" << std::endl;
					return;
				}
				if (time % k == d[i] && vis1[i])
				{
					std::cout << "NO" << std::endl;
					return;
				}
				else if (time % k == d[i] && !vis1[i])
				{
					if (i == 0)
					{
						std::cout << "YES" << std::endl;
						return;
					}
					vis1[i] = 1;
					dir = -1;
					pos = p[i] - 1;
					time++;
					break;
				}
			}
		}
		else
		{
			if (pos < p[0])
			{
				std::cout << "YES" << std::endl;
				return;
			}
			for (int i = n - 1; i >= 0; i--)
			{
				if (p[i] > pos) continue;
				time += pos - p[i];
				pos = p[i];
				if (i == 0 && time % k != d[i])
				{
					std::cout << "YES" << std::endl;
					return;
				}
				if (time % k == d[i] && vis2[i])
				{
					std::cout << "NO" << std::endl;
					return;
				}
				else if (time % k == d[i] && !vis2[i])
				{
					vis2[i] = 1;
					dir = 1;
					pos = p[i] + 1;
					time++;
					break;
				}
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
		int n, k;
		std::cin >> n >> k;
		std::vector<long long int> p(n);
		std::vector<long long int> d(n);
		for (int i = 0; i < n; i++)
			std::cin >> p[i];
		for (int i = 0; i < n; i++)
			std::cin >> d[i];
		int q;
		std::cin >> q;
		while (q--)
			solve(n, k, p, d);
	}
	__Made in France__
}
