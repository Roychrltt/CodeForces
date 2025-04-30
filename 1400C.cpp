#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	std::string S;
	int X;
	std::cin >> S >> X;
	int N = S.length();
	std::string W(N, '1');
	for (int i = 0; i < N; i++)
	{
		if (S[i] == '0')
		{
			if (i - X >= 0)
				W[i - X] = '0';
			if (i + X < N)
				W[i + X] = '0';
		}
	}

	for (int i = 0; i < N; i++)
	{
		bool one = false;
		one = one || (i - X >= 0 && W[i - X] == '1');
		one = one || (i + X < N && W[i + X] == '1');

		if (S[i] != one + '0')
		{
			std::cout << -1 << '\n';
			return;
		}
	}

	std::cout << W << std::endl;
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
