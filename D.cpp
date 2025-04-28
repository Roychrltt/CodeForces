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

static void solve(const std::vector<int>& primes)
{
	int n;
	std::cin >> n;
	std::vector<long long int> v(n);
	for (int i = 0; i < n; i++)
		std::cin >> v[i];
	std::sort(v.begin(), v.end(), std::greater<int>());
	int cnt = 0;
	long long int sum1 = 0, sum2 = 0;
	for (int i = 0; i < n; i++)
	{
		sum1 += v[i];
		sum2 += primes[i];
		if (sum1 < sum2) break;
		cnt++;
	}
	std::cout << n - cnt << std::endl;
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int t;
	std::cin >> t;
	std::vector<int> primes = findPrime(5900000);
	while (t--)
	{
		solve(primes);
	}
	__Made in France__
}
