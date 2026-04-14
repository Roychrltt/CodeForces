/*
 * Author: Chachou33
 */
#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

template<typename... Args>
void print(Args... args)
{
	((std::cout << args << " "), ...);
	std::cout << std::endl;
}

static void solve(void)
{
	int n, m;
	std::cin >> n >> m;
	std::vector<int> v(n + 2);
	for (int i = 1; i <= n; i++)
		std::cin >> v[i];
	std::vector<int> idx(m + 2);
	for (int i = 1; i <= m; i++)
		std::cin >> idx[i];
	idx[m + 1] = n + 1;
	v[0] = v[n + 1] = v[idx[1]];
	int s = 0, x = 0;
	for (int i = 0; i <= m; i++)
	{
		int cnt = 0;
		for (int j = idx[i]; j < idx[i+1]; j++)
		{
			if (v[j] != v[j+1])
				cnt++;
		}
		s += cnt;
		x = std::max(x, cnt);
	}
	std::cout << std::max(s / 2, x) << std::endl;
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
