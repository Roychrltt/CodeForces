#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n; i++)
		std::cin >> v[i];
	std::vector<int> pre(n), suf(n);
	pre[0] = v[0], suf[n - 1] = v[n - 1];
	for (int i = 1; i < n; i++)
		pre[i] = std::min(v[i], pre[i - 1]);
	for (int i = n - 2; i >= 0; i--)
		suf[i] = std::max(v[i], suf[i + 1]);
	std::string ans = "";
	for (int i = 0; i < n; i++)
	{
		//if (v[i] == pre[i] && (i == n - 1 || v[i] <= suf[i + 1])) ans += '1';
		//else if (v[i] == suf[i] && (i == 0 || v[i] >= pre[i - 1])) ans += '1';
		if (v[i] == pre[i]) ans += '1';
		else if (v[i] == suf[i]) ans += '1';
		else ans += '0';
	}
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
