#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

int cnt[35][35];

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	for (int i = 0; i < 30; ++i)
	{
        for (int j = 0; j < 30; ++j)
		{
            if (i < j) cnt[i][j] = 0;
            else if (j == 0) cnt[i][j] = 1;
            else cnt[i][j] = cnt[i - 1][j] + cnt[i - 1][j - 1];
        }
    }
	int t;
	std::cin >> t;

	while (t--)
	{
		long long n;
		int k;
		std::cin >> n >> k;
		int d = std::bit_width((unsigned long long)n) - 1;

		int ans = 0;
        for (int i = 0; i < d; ++i)
		{
            for (int j = 1; j <= i + 1; ++j)
			{
                if (i + j <= k) continue;
                ans += cnt[i][j - 1];
            }
        }

        if (d + 1 > k) ++ans;
        std::cout << ans << "\n";
	}
	__Made in France__
}
