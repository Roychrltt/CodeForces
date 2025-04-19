#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> nums(n), mods(n);
	long long int sum = 0;
	for (int i = 0; i < n; i++)
	{
		std::cin >> nums[i];
		sum += nums[i];
	}
	for (int i = 0; i < n; i++)
	{
		std::cin >> mods[i];
		sum -= mods[i];
	}
	std::array<int, 1000002> cnt = {0};
	auto check = [&](int k) -> int
	{
		for (int i = 0; i < n; i++)
			cnt[mods[i]]++;
		for (int i = 0; i < n; i++) {
			if (--cnt[nums[i] % k] < 0)
			{
				cnt[nums[i] % k] = 0;
				for (int i = 0; i < n; i++)
					cnt[mods[i]] = 0;
				return 0;
			}
		}
		return 1;
	};
	if (sum == 0)
	{
		std::cout << (check(10000000) ? 10000000 : -1) << std::endl;
		return;
	}
	if (sum < 0)
	{
		std::cout << -1 << std::endl;
		return;
	}
	for (int i = 1; 1ll * i * i <= sum; i++) {
		if (sum % i) continue;
		if (check(i))
		{
			std::cout << i << std::endl;
			return;
		}
		else if (check(sum / i))
		{
			std::cout << sum / i << std::endl;
			return;
		}
	}
	std::cout << -1 << std::endl;
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
