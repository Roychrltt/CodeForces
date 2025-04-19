#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> v(n + 1);
	std::vector<int> ans(n);
	std::vector<int> vis(n + 1);
	int count = 0;
	for (int i = 1; i < n + 1; i++) {
		std::cin >> v[i];
	}
	for (int i = 0; i < n; i++) {
		int x;
		std::cin >> x;
		if (vis[x] == 1)
			ans[i] = count;
		else if (v[x] == x)
		{
			count++;
			ans[i] = count;
			vis[x] = 1;
		}
		else
		{
			int k = v[x];
			while (!vis[k])
			{
				count++;
				vis[k] = 1;
				k = v[k]; 
			}
			ans[i] = count;
		}
	}
	for (int i : ans) {
		std::cout << i << " ";
	}
	std::cout << std::endl;
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
