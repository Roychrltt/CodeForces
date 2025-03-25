#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n, a, b;
	std::cin >> n >> a >> b;
	--a, --b;
	std::vector<int> v(n);
	for (int i = 0; i < n; i++) {
		v[(a + i) % n] = i % 2;
	}
	if ((n & 1) || (a - b) % 2 == 0) v[a] = 2;
	for (int i = 0; i < n; i++) {
		std::cout << v[i] << ' ';
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
