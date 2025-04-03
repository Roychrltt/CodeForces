#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	long long int n, k, x;
	std::cin >> n >> k >> x;
	std::vector<int> v(n);
	long long int sum = 0;
	for (int i = 0; i < n; i++) {
		std::cin >> v[i];
		sum += v[i];
	}
	long long int a = x / sum;
	if (a > k || sum * k < x)
	{
		std::cout << 0 << std::endl;
		return;
	}
	long long int mod = x % sum;
	int count = 0;
	for (int i = n - 1; i >= 0; i--) {
		if (mod <= 0) break;
		mod -= v[i];
		count++;
	}
	std::cout << n * (k - a) - count + 1 << std::endl;
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
