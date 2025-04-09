#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

bool isPrime(long long int num)
{
	if (num == 1 || num == 0 || num == 4) return false;
	if (num == 2 || num == 3) return true;
	for (int i = 2; i * i <= num; i++) {
		if (num % i == 0) return false;
	}
	return true;
}

static void solve(void)
{
	int x;
	int k;
	std::cin >> x >> k;
	if (x == 1)
	{
		while (--k)
			x = x * 10 + 1;
	}
	if (!isPrime(x) || (isPrime(x) && k > 1))
		std::cout << "NO" << std::endl;
	else
		std::cout << "YES" << std::endl;
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
