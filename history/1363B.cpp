#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	std::string s;
	std::cin >> s;
	int len = s.size();
	int cnt = 0, cnt1 = 0;
	std::vector<int> pre0(len), pre1(len), suf0(len), suf1(len);
	if (s[0] == '0') pre0[0] = 1;
	else pre1[0] = 1;
	if (s[0] == '1') cnt1++;
	for (int i = 1; i < len; i++)
	{
		if (s[i] == '1') cnt1++;
		if (s[i] != s[i - 1]) cnt++;
		pre0[i] = pre0[i - 1] + (s[i] == '0');
		pre1[i] = pre1[i - 1] + (s[i] == '1');
	}
	if (cnt < 2)
	{
		std::cout << 0 << std::endl;
		return;
	}
	if (s[len - 1] == '0') suf0[len - 1] = 1;
	else suf1[len - 1] = 1;
	for (int i = len - 2; i >= 0; i--)
	{
		suf0[i] = suf0[i + 1] + (s[i] == '0');
		suf1[i] = suf1[i + 1] + (s[i] == '1');
	}
	int ans = len;
	for (int i = 0; i < len - 1; i++)
	{
		if (s[i] == s[i + 1]) continue;
		ans = std::min(ans, pre1[i] + suf0[i + 1]);
		ans = std::min(ans, pre0[i] + suf1[i + 1]);
	}
	ans = std::min(ans, std::min(cnt1, len - cnt1));
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
