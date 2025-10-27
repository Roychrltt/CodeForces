#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> a(n), b(n), c(n);
	for (int i = 0; i < n; i++)
		std::cin >> a[i];
	for (int i = 0; i < n; i++)
		std::cin >> b[i];
	for (int i = 0; i < n; i++)
		std::cin >> c[i];
	auto f = [](std::vector<int>& vec) -> std::vector<int>
	{
		std::vector<int> ans = {-1, -1, -1};
		for (int i = 0; i < vec.size(); i++)
		{
			if (ans[2] == -1 || vec[i] > vec[ans[2]])
			{
				ans[0] = ans[1];
				ans[1] = ans[2];
				ans[2] = i;
			}
			else if (ans[1] == -1 || vec[i] > vec[ans[1]])
			{
				ans[0] = ans[1];
				ans[1] = i;
			}
			else if (ans[0] == -1 || vec[i] > vec[ans[0]]) ans[0] = i;
		}
		return ans;
	};
	std::vector<int> idxa, idxb, idxc;
	idxa = f(a);
	idxb = f(b);
	idxc = f(c);
	int sum = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				if (idxa[i] != idxb[j] && idxa[i] != idxc[k] && idxb[j] != idxc[k]) sum = std::max(sum, a[idxa[i]] + b[idxb[j]] + c[idxc[k]]);
			}
		}
	}
	std::cout << sum << std::endl;
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
