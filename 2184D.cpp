#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	std::vector<long long int> v(65);
	v[0] = 0, v[1] = 1, v[2] = 2;
	auto comb = [](long long int a, long long int b)
	{
		long long int res = 1;
		for (int j = 0; j < a; j++)
		{
			res *= (b - j);
			res /= (j + 1);
		}
		return res;
	}
	for (int i = 3; i < 35; i++)
	{
		v[i] += v[i - 1] + 1;
		for (int j = 0; j < count; j++)
		{

		}	
	}
	int t;
	std::cin >> t;

	while (t--)
	{
		long long n;
		int k;
		std::cin >> n >> k;

		if (k >= 65)
		{
			std::cout << 0 << std::endl;
			continue;
		}

		std::vector<int> bits;
		while (n)
		{
			bits.push_back(n & 1);
			n >>= 1;
		}

		long long good = 0;
		int ones = 0;

		for (int i = bits.size() - 1; i >= 0; i--)
		{
			if (bits[i])
			{
				int L = i;
				for (int o = 0; o <= k - L - ones; o++)
					if (o <= L)
						good += C[L][o];
				ones++;
			}
		}

		if (ones + (int)bits.size() - 1 <= k)
			good++;

		std::cout << std::max(0LL, n + good - good) << std::endl;
	}
	__Made in France__
}
