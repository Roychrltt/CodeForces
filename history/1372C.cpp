#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		int x;
		std::cin >> x;
		if (x == i + 1)
		{
			v[i] = 1;
			cnt++;
		}
	}
	if (cnt == n) std::cout << "0" << std::endl;
	else if (cnt == 0) std::cout << "1" << std::endl;
	else
	{
		int l = 0, r = n - 1, cur = 0;
		while (l < r)
		{
			if (v[l] == 1)
			{
				l++;
				cur++;
			}
			if (v[r] == 1)
			{
				r--;
				cur++;
			}
			if (v[l] == 0 && v[r] == 0) break;
		}
		if (cur == cnt) std::cout << "1" << std::endl;
		else std::cout << "2" << std::endl;
	}
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
