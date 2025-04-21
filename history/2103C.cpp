#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static bool ltr(std::vector<int>& v, int k, int n)
{
	int l = 0, cnt = 0;
	int ans = 0;
	while (l < n - 1)
	{
		if (v[l] <= k) cnt++;
		if (cnt * 2 >= l + 1)
		{
			ans++;
			l++;
			if (cnt * 2 >= l + 1 && v[l] > k) l++;
			break;
		}
		l++;
	}
	cnt = 0;
	int prev = l;
	while (l < n - 1)
	{
		if (v[l] <= k) cnt++;
		if (cnt * 2 >= l - prev + 1)
		{
			ans++;
			l++;
			break;
		}
		l++;
	}
	if (ans == 2) return true;
	cnt = 0;
	prev = l;
	while (l < n)
	{
		if (v[l] <= k) cnt++;
		if (cnt * 2 >= l - prev + 1)
		{
			ans++;
			break;
		}
		l++;
	}
	return ans >= 2;
}

static bool rtl(std::vector<int>& v, int k, int n)
{
	int r = n - 1, cnt = 0;
	int ans = 0;
	while (r > 0)
	{
		if (v[r] <= k) cnt++;
		if (cnt * 2 >= n - r)
		{
			ans++;
			r--;
			if (cnt * 2 >= n - r && v[r] > k) r--;
			break;
		}
		r--;
	}
	cnt = 0;
	int prev = r;
	while (r > 0)
	{
		if (v[r] <= k) cnt++;
		if (cnt * 2 >= prev - r + 1)
		{
			ans++;
			r--;
			break;
		}
		r--;
	}
	cnt = 0;
	prev = r;
	while (r >= 0)
	{
		if (v[r] <= k) r--;
		if (cnt * 2 >= prev - r + 1)
		{
			ans++;
			r--;
			break;
		}
		r--;
	}

	return ans >= 2;
}

static bool mid(std::vector<int>& v, int k, int n)
{
	int l = 0, r = n - 1, cnt = 0;
	int ans = 0;
	while (l < n)
	{
		if (v[l] <= k) cnt++;
		if (cnt * 2 >= l + 1)
		{
			ans++;
			l++;
			break;
		}
		l++;
	}
	cnt = 0;
	while (r > l)
	{
		if (v[r] <= k) cnt++;
		if (cnt * 2 >= n - r)
		{
			ans++;
			r--;
			break;
		}
		r--;
	}
	cnt = 0;
	if (l < r - 1)
	{
		int len = r - l - 1;
		while (l < r)
		{
			if (v[l] <= k) l++;
			if (cnt * 2 >= len)
			{
				ans++;
				break;
			}
			l++;
		}
	}

	return ans >= 2;
}

static void solve(void)
{
	int n, k;
	std::cin >> n >> k;
	std::vector<int> v(n);
	for (int& i : v) std::cin >> i;
	if (ltr(v, k, n) || rtl(v, k, n) || mid(v, k, n)) std::cout << "YES" << std::endl;
	else std::cout << "NO" << std::endl;
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
