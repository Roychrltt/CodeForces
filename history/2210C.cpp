/*
 * Author: Chachou33
 */
#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

template<typename... Args>
void print(Args... args)
{
	((std::cout << args << " "), ...);
	std::cout << std::endl;
}

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<long long int> v(n);
	for (int i = 0; i < n; i++)
		std::cin >> v[i];
	for (int i = 0; i < n; i++)
		std::cin >> v[i];
	int cnt = 0;
	if (v[0] > std::gcd(v[0], v[1]))
	{
		cnt++;
		v[0] = std::gcd(v[0], v[1]);
	}
	if (v[n - 1] > std::gcd(v[n - 1], v[n - 2]))
	{
		cnt++;
		v[n - 1] = std::gcd(v[n - 1], v[n - 2]);
	}
	for (int i = 1; i < n - 1; i++)
	{
		long long int x = std::gcd(v[i - 1], v[i]);
		long long int y = std::gcd(v[i + 1], v[i]);
		if (v[i] > x * y / std::gcd(x, y)) cnt++;
	}
	std::cout << cnt << std::endl;
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
