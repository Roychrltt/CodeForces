#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int n, k, a, b;
	std::cin >> n >> k >> a >> b;
	if (a <= b)
	{
		int c = (b + a) / (a + 1);
		int d = b % (a + 1);
		int tmp = a - d;
		if (c > k)
		{
			std::cout << "NO" << std::endl;
			return 0;
		}

		if (d == 0)
		{
			d = a;
			std::string ans = "";
			ans.append(c, 'B');
			ans += 'G';
			while (d--)
				std::cout << ans;
			ans.pop_back();
			std::cout << ans << std::endl;
			return 0;
		}
		std::string ans = "";
		ans.append(c, 'B');
		ans += 'G';
		while (d--)
			std::cout << ans;
		ans = "";
		ans.append(c - 1, 'B');
		while (tmp--)
			std::cout << ans << "G";
		std::cout << ans << std::endl;
	}
	else
	{
		std::swap(a, b);
		int c = (b + a) / (a + 1);
		int d = b % (a + 1);
		int tmp = a - d;
		if (c > k)
		{
			std::cout << "NO" << std::endl;
			return 0;
		}

		if (d == 0)
		{
			d = a;
			std::string ans = "";
			ans.append(c, 'G');
			ans += 'B';
			while (d--)
				std::cout << ans;
			ans.pop_back();
			std::cout << ans << std::endl;
			return 0;
		}
		std::string ans = "";
		ans.append(c, 'G');
		ans += 'B';
		while (d--)
			std::cout << ans;
		ans = "";
		ans.append(c - 1, 'G');
		while (tmp--)
			std::cout << ans << "B";
		std::cout << ans << std::endl;
	}
	__Made in France__
}
