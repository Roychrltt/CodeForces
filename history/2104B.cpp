#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;
 
static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<long long int> v(n);
	for (int i = 0; i < n; i++)
		std::cin >> v[i];
	std::vector<long long int> maxR(n);
	maxR[0] = v[0];
	for (int i = 1; i < n; i++)
		maxR[i] = std::max(v[i], maxR[i - 1]); 
	std::vector<long long int> suffix(n);
	suffix[n - 1] = v[n - 1];
	for (int i = n - 2; i >= 0; i--)
		suffix[i] = suffix[i + 1] + v[i];
	for (int i = n - 1; i >= 0; i--)
	{
		if (maxR[i] > v[i])
			std::cout << suffix[i] - v[i] + maxR[i] << " ";
		else
			std::cout << suffix[i] << " ";
	}
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
