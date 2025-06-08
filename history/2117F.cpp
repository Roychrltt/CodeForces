#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

const long long int MOD = 1e9 + 7;

long long int fastPower(long long int x, long long int p)
{
	long long int res = 1;
	while (p)
	{
		if (p & 1) res = (res * x) % MOD;
		p >>= 1;
		x = (x * x) % MOD;
	}
	return res;
}

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<std::vector<int>> next(n + 1);
	for (int i = 0; i < n - 1; i++)
	{
		int x, y;
		std::cin >> x >> y;
		next[x].push_back(y);
		next[y].push_back(x);
	}
	int cnt = 0;
	if (next[1].size() > 2)
	{
		std::cout << 0 << std::endl;
		return;
	}
	for (int i = 1; i <= n; i++)
	{
		if (next[i].size() == 1) cnt++;
		if (cnt > 3 || (next[1].size() == 2 && cnt > 2))
		{
			std::cout << 0 << std::endl;
			return;
		}
	}
	if (n == 2 || (cnt == 2 && next[1].size() == 1))
	{
		std::cout << fastPower(2, n) << std::endl;
		return;
	}
	std::vector<int> vis(n + 1);
	vis[1] = 1;
	std::vector<int> v;
	int reg = 0;
	auto dfs = [&](this auto&& dfs, int i, int len) -> void
	{
		if (next[i].size() == 1)
		{
			v.push_back(len);
			return;
		}
		if (next[i].size() == 3) reg = len;
		for (int node : next[i])
		{
			if (vis[node]) continue;
			vis[node] = 1;
			dfs(node, len + 1);
			vis[node] = 0;
		}
	};
	for (int i : next[1])
	{
		vis[i] = 1;
		dfs(i, 2);
	}
	if (v[0] > v[1]) std::swap(v[0], v[1]);
	int a = v[0], b = v[1];
	long long int ans;
	if (b != a)
		ans = (fastPower(2, reg + b - a - 1) + fastPower(2, reg + b - a)) % MOD;
	else
		ans = 2 * fastPower(2, reg + b - a) % MOD;
	if (reg == 0) ans = ans * 2 % MOD;
	std::cout << ans << std::endl;
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
