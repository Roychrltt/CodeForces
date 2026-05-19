#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	std::string s;
	std::cin >> s;
	int n = s.length();
	std::vector<int> cnt(10), last(10), first(10, n + 1);
	std::vector<int> preodd(n), suf(n);
	for (int i = 0; i < n; i++)
	{
		int x = s[i] - '0';
		cnt[x]++;
		last[x] = i;
		first[x] = std::min(first[x], i);
		preodd[i] = (x & 1);
		if (i) preodd[i] += preodd[i - 1];
	}
	suf[n - 1] = (s[n - 1] == '0');
	for (int i = n - 2; i >= 0; i--)
		suf[i] = suf[i + 1] + (s[i] == '0');
	int ans = cnt[4] + cnt[8];
	int extra = cnt[2] + cnt[6];
	if (extra == 0)
	{
		std::cout << ans << std::endl;
		return;
	}
	int lastidx = std::max(last[2], last[6]);
	int firstidx = std::min(first[2], first[6]);
	extra = std::min(extra, preodd[lastidx] + suf[firstidx]);
	std::cout << ans + extra << std::endl;
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
