#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n, k;
	std::cin >> n >> k;
	std::vector<int> a(n/2), b(n/2);
	if (k == 0)
	{
		for (int i = 0; i < n / 2; i++)
		{
			a[i] = i;
			b[i] = (i ^ (n - 1));
		}
	}
	else if (k > 0 && k < n - 1)
	{
		int x = std::min(k, (k ^ (n - 1)));
		for (int i = 0; i < n / 2; i++)
		{
			a[i] = i;
			b[i] = (i ^ (n - 1));
		}
		a[0] = k;
		b[0] = n - 1;
		a[x] = 0;
		b[x] = (k ^ (n - 1));
	}
	else
	{
		if (n == 4)
		{
			std::cout << -1 << std::endl;
			return;
		}
		a[0] = n - 2;
		b[0] = n - 1;
		a[1] = 1;
		b[1] = n - 3;
		a[2] = 0;
		b[2] = 2;
		for (int i = 3; i < n / 2; i++)
		{
			a[i] = i;
			b[i] = (i ^ (n - 1));
		}	
	}
	for (int i = 0; i < n / 2; i++)
	{
		std::cout << a[i] << " " << b[i] << std::endl;
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
