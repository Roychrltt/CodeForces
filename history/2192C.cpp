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
	long long int n, h, k;
	std::cin >> n >> h >> k;
	std::vector<long long int> v(n);
	for (int i = 0; i < n; i++)
		std::cin >> v[i];
	std::vector<long long int> pre(n), suf(n);
	pre[0] = v[0];
	for (int i = 1; i < n; i++)
		pre[i] = std::min(v[i], pre[i - 1]);
	suf[n - 1] = v[n - 1];
	for (int i = n - 2; i >= 0; i--)
		suf[i] = std::max(v[i], suf[i + 1]);
	suf.push_back(pre[n - 1]);
	long long int ans = 0;
	long long int s = std::reduce(v.begin(), v.end(), 0ll);
	ans += (n + k) * (h / s);
	h %= s;
	if (h == 0)
	{
		std::cout << ans - k << std::endl;
		return;
	}
	int cnt = 0;
	long long int cur = 0;
	while (cnt < n)
	{
		cur += v[cnt];
		if (std::max(cur, cur - pre[cnt] + suf[cnt + 1]) >= h)
		{
			cnt++;
			break;
		}
		cnt++;
	}
	std::cout << ans + cnt << std::endl;
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
