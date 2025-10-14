#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<long long int> v(n);
	std::map<long long int, long long int> map;
	for (int i = 0; i < n; i++)
	{
		std::cin >> v[i];
		map[v[i]]++;
	}
	std::vector<long long int> odd;
	long long int sum = 0;
	long long int cnt = 0;
	for (auto& [l, c] : map)
	{
		if (c & 1)
		{
			odd.push_back(l);
			c--;
		}
		sum += l * c;
		cnt += c;
	}
	if (odd.empty())
	{
		std::cout << sum << std::endl;
		return;
	}
	if (sum == 0)
	{
		std::cout << 0 << std::endl;
		return;
	}
	long long int ans = sum;
	for (long long int x : odd)
	{
		if (x >= sum) break;
		ans = sum + x;
	}
	for (int i = 0; i < odd.size() - 1; i++)
	{
		if (odd[i + 1] - odd[i] < sum) ans = std::max(ans, sum + odd[i] + odd[i + 1]);
	}
	std::cout << ((ans == sum && cnt == 2) ? 0 : ans) << std::endl;
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
