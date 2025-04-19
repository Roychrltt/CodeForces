#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> v(n), locked(n);
	for (int i = 0; i < n; i++)
		std::cin >> v[i];
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		std::cin >> locked[i];
		if (locked[i] == 0) cnt++;
	}
	std::vector<int> b(cnt);
	int x = 0;
	for (int i = 0; i < n; i++)
		if (locked[i] == 0) b[x++] = v[i];
	std::sort(b.begin(), b.end(), std::greater<>());
	x = 0;
	for (int i = 0; i < n; i++) {
		if (locked[i] == 1) std::cout << v[i] << " ";
		else std::cout << b[x++] << " ";
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
