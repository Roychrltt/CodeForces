#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	long long int s, m;
	std::cin >> s >> m;
	int len = 0;
	while (!(m & (1 << len))) len++;
	int lenn = 0;
	while (!(s & (1 << lenn))) lenn++;
	if (len > lenn)
	{
		std::cout << -1 << std::endl;
		return;
	}
	std::vector<long long int> A;
	for (int i = 0; i < 64; i++)
		if ((1ll << i) & m) A.push_back(1ll << i);
	std::reverse(A.begin(), A.end());
	long long int l = 0, r = s;
	auto check = [&](long long int x) -> bool
	{
		long long int cur = s;
		for (const auto& aa : A)
		{
			long long int cnt = std::min(x, cur / aa);
			cur -= cnt * aa;
		}
		return cur == 0;
	};
	while (l < r)
	{
		long long int mid = (l + r) / 2;
		if (check(mid)) r = mid;
		else l = mid + 1;
	}
	std::cout << l << std::endl;
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
