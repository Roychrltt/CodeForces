#include <bits/stdc++.h>

static void solve(void) {
    int n, x;
	std::cin >> n >> x;
    
    int cnt = 0;
    while (x & (1 << cnt)) cnt++;
    
    cnt = (1 << cnt);
    if (cnt >= n)
	{
        int num = 0;
        for (int i = 0; i < n - 1; i++)
		{
			std::cout << i << " ";
            num |= i;
        }
		std::cout << ((num | n - 1) == x ? n - 1 : x) << std::endl;
    }
	else
	{
        for (int i = 0; i < cnt; i++)
			std::cout << i << " ";

        for (int i = cnt; i < n - 1; i++)
			std::cout << "0 ";

		std::cout << x << std::endl;
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
	return 0;
}
