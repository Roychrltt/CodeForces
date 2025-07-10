#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n, k;
	std::cin >> n >> k;
	std::vector<int> v(n);
	for (int i = 0; i < n; i++)
		std::cin >> v[i];
	std::vector<int> copy = v;
	std::nth_element(copy.begin(), copy.begin() + k - 1, copy.end());
	int x = copy[k - 1];
	std::vector<int> idx;
	idx.reserve(n);
	for (int i = 0; i < n; i++)
		if (v[i] <= x) idx.push_back(i);
	int r = idx.size() - 1, l = 0;
	int cnt = 0;
	while (l < r)
	{
		if (v[idx[l]] != v[idx[r]] && cnt > idx.size() - k)
		{
			std::cout << "NO" << std::endl;
			return;
		}
		if (v[idx[l]] != v[idx[r]] && v[idx[l]] < x && v[idx[r]] < x)
		{
			std::cout << "NO" << std::endl;
			return;
		}
		else if (v[idx[l]] != v[idx[r]] && v[idx[l]] == x)
		{
			cnt++;
			l++;
		}
		else if (v[idx[l]] != v[idx[r]] && v[idx[r]] == x)
		{
			cnt++;
			r--;
		}
		else
		{
			l++;
			r--;
		}
	}
	std::cout << "YES" << std::endl;
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
