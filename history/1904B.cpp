#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;
# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define BLUE "\033[34m"
# define MAGENTA "\033[35m"
# define CYAN "\033[36m"
# define GRAY "\033[90m"
# define BOLD "\033[1m"
# define UNDER "\033[4m"
# define BLINK "\033[5m"
# define ERASE = "\033[2K\r"
# define RESET "\033[0m"

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<std::pair<long long int, long long int>> v(n);
	for (int i = 0; i < n; i++)
	{
		std::cin >> v[i].first;
		v[i].second = i;
	}
	std::sort(v.begin(), v.end());

	std::vector<long long int> ans(n), pre(n);
	pre[0] = v[0].first;
	ans[v[n - 1].second] = n - 1;
	for (int i = 1; i < n; i++)
		pre[i] = pre[i - 1] + v[i].first;
	for (int i = n - 2; i >= 0; i--)
	{
		if (pre[i] < v[i + 1].first)
			ans[v[i].second] = i;
		else
			ans[v[i].second] = ans[v[i + 1].second];
	}
	for (int i = 0; i < n; i++)
		std::cout << ans[i] << " ";
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
