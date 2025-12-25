#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	for (int i = n; i >= 0; i--)
	{
		int cur = (1 << i) - 1;
		std::cout << cur << " ";
		int k = 1;
		while (((k << (i + 1)) | cur) < (1 << n))
		{
			std::cout << ((k << (i + 1)) | cur) << " ";
			k++;
		}
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
