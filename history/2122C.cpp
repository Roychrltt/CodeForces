#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> x(n), y(n);
	for (int i = 0; i < n; i++)
		std::cin >> x[i] >> y[i];
	std::vector<int> order(n);
	std::iota(order.begin(), order.end(), 0);
	std::sort(order.begin(), order.end(), [&](int i, int j) {
		return x[i] < x[j];
	});
	std::sort(order.begin(), order.begin() + n / 2, [&](int i, int j) {
		return y[i] < y[j];
	});
	std::sort(order.begin() + n / 2, order.end(), [&](int i, int j) {
		return y[i] < y[j];
	});
	for (int i = 0; i < n / 2; i++)
		std::cout << order[i] + 1 << " " << order[n - 1 - i] + 1 << std::endl;
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
