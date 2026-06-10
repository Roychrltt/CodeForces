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
	std::vector<long long int> left(n - 1), right(n - 1);
	std::vector<long long int> res;
	for (int i = 0; i < n; i++)
	{
		int cnt = 1;
		left[0] = v[(i + 1) % n];
		while (cnt < n - 1)
		{
			left[cnt] = std::max(left[cnt - 1], v[(i + cnt + 1) % n]);
			cnt++;
		}
		cnt = n - 3;
		right[n - 2] = v[i];
		while (cnt >= 0)
		{
			right[cnt] = std::max(right[cnt + 1], v[(i + cnt + 2) % n]);
			cnt--;
		}
		long long int ans = 0;
		cnt = 0;
		while (cnt < n - 1)
		{
			ans += std::min(left[cnt], right[cnt]);
			cnt++;
		}
		res.push_back(ans);
	}
	std::cout << res.back() << " ";
	for (int i = 0; i < n - 1; i++)
		std::cout << res[i] << " ";
	std::cout << std::endl;
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
