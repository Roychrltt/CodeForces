#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	long long n, k;
	std::cin >> n >> k;
	std::string s;
	std::cin >> s;
	std::vector<long long int> v(n);
	for (int i = 0; i < n; i++)
		std::cin >> v[i];
	if (s.find('0') == std::string::npos)
	{
		long long int sum = 0, maxSum = 0;
		for (long long int i : v) {
			if (sum > 0) sum += i;
			else sum = i;
			maxSum = std::max(maxSum, sum);
		}
		if (maxSum == k)
		{
			std::cout << "Yes" << std::endl;
			std::copy(v.begin(), v.end(), std::ostream_iterator<long long int>(std::cout, " "));
			std::cout << std::endl;
		}
		else std::cout << "No" << std::endl;
		return;
	}
	for (int i = 0; i < n; i++)
		if (s[i] == '0') v[i] = -10000000000000;
	int i = 0;
	while (i < n)
	{
		if (s[i] == '0')
		{
			i++;
			continue;
		}
		long long int sum = 0, maxSum = 0;
		while (i < n && s[i] == '1')
		{
			if (sum > 0) sum += v[i];
			else sum = v[i];
			maxSum = std::max(maxSum, sum);
			i++;
		}
		if (maxSum > k)
		{
			std::cout << "No" << std::endl;
			return;
		}
	}
	i = 0;
	while (s[i] == '1')
		i++;
	int l = i - 1, r = i + 1;
	while (r < n && s[r] == '0') r++;
	long long int a = 0, b = 0, reg = 0, sum = 0;
	while (l >= 0 && s[l] == '1')
	{
		sum += v[l];
		reg = std::max(sum, reg);
		l--;
	}
	a = reg;
	sum = 0, reg = 0;
	while (r < n && s[r] == '1')
	{
		sum += v[r];
		reg = std::max(sum, reg);
		r++;
	}
	b = reg;
	v[i++] = k - a - b;
	while (i < n && s[i] == '0')
	{
		v[i] = 0;
		i++;
	}
	std::cout << "Yes" << std::endl;
	std::copy(v.begin(), v.end(), std::ostream_iterator<long long int>(std::cout, " "));
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
