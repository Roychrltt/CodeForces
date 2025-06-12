#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(int n, int k, std::vector<long long int>& p, std::vector<long long int> d)
{
	std::cout << 7 << std::endl;
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
			for (int i = 0; i < n; i++)
			{
				std::cout << i << std::endl;
				if (p[i] < pos) continue;
				std::cout << i << " " << pos << std::endl;
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
					std::cout << time << " " << p[i] << " " << dir << std::endl;
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
