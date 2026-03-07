#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	long long int n;
	std::cin >> n;
	auto f = [](long long int x)
	{
		int s = 0;
		while (x)
		{
			s += x % 10;
			x /= 10;
		}
		return s;
	};
	int sum = f(n);
	int cnt = 0;
	std::string str = std::to_string(n);
	if (str.length() == 1)
	{
		std::cout << 0 << std::endl;
		return;
	}
	std::sort(str.begin() + 1, str.end(), std::greater<>());
	for (int i = 1; i < str.size(); i++)
	{
		if (sum < 10) break;
		if (str[0] > str[i] + 1)
		{
			sum -= str[0] - '1';
			cnt++;
			str[0] = '1';
		}
		if (sum < 10) break;
		sum -= str[i] - '0';
		cnt++;
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
