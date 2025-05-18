#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int n;
	std::cin >> n;
	std::vector<int> a(n + 1), b(n + 1);
	for (int i = 1; i <= n; i++)
	{
		int x;
		std::cin >> x;
		a[x] = i;
	}
	for (int i = 1; i <= n; i++)
	{
		int x;
		std::cin >> x;
		int d = (i - a[x] + n) % n;
		b[d]++;
	}
	std::cout << *max_element(b.begin(), b.end()) << std::endl;
	__Made in France__
}
