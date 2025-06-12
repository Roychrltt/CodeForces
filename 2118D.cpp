#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

const long long int L = 1e15;

static void solve(void)
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
	{
		int dir = 1;
		long long int pos;
		std::cin >> pos;
		std::vector<int> vis1(n);
		std::vector<int> vis2(n);
		long long int time = 0;
		bool con = true;
		while (con)
		{
			bool ok = true;
			bool out = false;
			if (dir == 1)
			{
				for (int i = 0; i < n; i++)
				{
					if (p[i] < pos) continue;
					time += p[i] - pos;
					if (time % k == d[i] && vis1[i])
					{
						ok = false;
						break;
					}
					else if (time % k == d[i] && !vis1[i])
					{
						vis1[i] = 1;
						dir = -1;
						pos = p[i] - 1;
						time++;
						break;
					}
					pos = p[i];
					if ((i == n - 1 && ok) || (pos <= 1)) out = true;
				}
			}
			else if (pos > 1)
			{
				for (int i = n - 1; i >= 0; i--)
				{
					if (p[i] > pos) continue;
					time += pos - p[i];
					if (time % k == d[i] && vis2[i])
					{
						ok = false;
						break;
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
					if ((i == 0 && ok) || pos >= n - 1) out = true;
					pos = p[i];
				}
			}
			if (!ok)
			{
				std::cout << "NO" << std::endl;
				con = false;
			}
			if (out)
			{
				std::cout << "YES" << std::endl;
				con = false;
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
	__Made in France__
}
