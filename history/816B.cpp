#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int n, k, q;
	std::cin >> n >> k >> q;
	std::vector<int> v(200002);
	for (int i = 0; i < n; i++)
	{
		int a, b;
		std::cin >> a >> b;
		v[a]++;
		v[b + 1]--;
	}
	for (int i = 1; i < 200002; i++)
		v[i] += v[i - 1];
	if (v[0] >= k) v[0] = 1;
	for (int i = 1; i < 200002; i++)
		v[i] = v[i - 1] + (v[i] >= k);
	while (q--)
	{
		int l, r;
		std::cin >> l >> r;
		if (l == 0) std::cout << v[r] << std::endl;
		else std::cout << v[r] - v[l - 1] << std::endl;
	}
	__Made in France__
}
