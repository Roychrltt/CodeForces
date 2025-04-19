#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

std::vector<int> findPrime(int n)
{
	std::vector<bool> is_prime(n + 1, true);
	std::vector<int> primes;
	is_prime[0] = is_prime[1] = false;
	for (int i = 2; i * i <= n; i++) {
		if (is_prime[i]) {
			for (int j = i * i; j <= n; j += i)
				is_prime[j] = false;
		}
	}
	for (int i = 2; i <= n; i++) {
		if (is_prime[i]) primes.push_back(i);
	}
	return primes;
}

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> primes = findPrime(n);
	int k = primes.size();
	int ans = 0;
	for (int i = 0; i < k; i++) {
		if (primes[i] > n) break;
		ans += n / primes[i];
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
