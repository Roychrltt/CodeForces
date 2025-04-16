#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		std::cin >> v[i];
		if (!v[i]) cnt++;
	}
	if(!cnt)
	{
		std::cout << 1 << std::endl;
		std::cout << "1 " << n << std::endl;
	}
	else
	{
		if(!v[0] && !v[n-1])
		{
			std::cout << 3 << std::endl;
			std::cout << "3 " << n << std::endl;
			std::cout << "1 2" << std::endl;
			std::cout << "1 2" << std::endl;
		}
		else if(v[0])
		{
			std::cout << 2 << std::endl;
			std::cout << "2 " << n << std::endl;
			std::cout << "1 2" << std::endl;
		}
		else if(v[n-1])
		{
			std::cout << 2 << std::endl;
			std::cout << "1 " << n - 1 << std::endl;
			std::cout << "1 2" << std::endl;
		}
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
