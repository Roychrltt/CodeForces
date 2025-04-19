#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n, k;
	std::cin >> n >> k;
	long long int ans = 0;
	std::priority_queue<int> pq;
	for (int i = 0; i < n; i++) {
		int x;
		std::cin >> x;
		pq.push(x);
		if ((n - i) % (k + 1) == 0)
		{
			ans += pq.top();
			pq.pop();
		}
	}
	std::cout << ans << std::endl;
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
