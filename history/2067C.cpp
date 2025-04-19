#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	for (int l = 0; l <= 9; l++) {
        std::string s = std::to_string(n - l);
        int md = 0;
        for (auto c: s) {
            if (c <= '7') {
                md = std::max(md, c - '0');
            }
        }
        if (l >= 7 - md) {
			std::cout << l << std::endl;
            return;
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
