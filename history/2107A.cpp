#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n; i++)
		std::cin >> v[i];
	int a = *max_element(v.begin(), v.end());
	int b = *min_element(v.begin(), v.end());
	if (a == b) std::cout << "No" << std::endl;
	else
	{
		std::cout << "Yes" << std::endl;
		for (int i = 0; i < n; i++)
		{
			if (v[i] == a) std::cout << "1 ";
			else std::cout << "2 ";
		}
		std::cout << std::endl;
	}
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
