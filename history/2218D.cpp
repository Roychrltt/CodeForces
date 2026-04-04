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

static void solve(const std::vector<int>& primes)
{
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++)
		std::cout << 1ll* primes[i] * primes[i + 1] << " ";
	std::cout << std::endl;
}

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

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int t;
	std::cin >> t;
	std::vector<int> primes = findPrime(1e6);
	while (t--)
	{
		solve(primes);
	}
	__Made in France__
}
