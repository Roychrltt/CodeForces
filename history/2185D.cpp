#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	long long int n, m, h;
	std::cin >> n >> m >> h;
	std::vector<std::pair<long long int, int>> v(n);
	for (int i = 0; i < n; i++)
		std::cin >> v[i].first;
	std::vector<int> ori(n);
	for (int i = 0; i < n; i++)
		ori[i] = v[i].first;
	int i = 0, cnt = 0;
	long long int b, c;
	while (i < m)
	{
		std::cin >> b >> c;
		b--;
		if (v[b].second < cnt)
		{
			v[b].second = cnt;
			v[b].first = ori[b];
		}
		v[b].first += c;
		if (v[b].first > h)
		{
			cnt++;
			v[b].second = cnt;
			v[b].first = ori[b];
		}
		i++;
	}
	for (int i = 0; i < n; i++)
	{
		if (v[i].second == cnt) std::cout << v[i].first << " ";
		else std::cout << ori[i] << " ";
	}
	std::cout << std::endl;
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
