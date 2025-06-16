#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n, k, l;
	std::cin >> n >> k >> l;
	std::vector<int> v(n);
	for (int i = 0; i < n; i++)
		std::cin >> v[i];

	int cnt = 0;
	bool ok = true;
	for (int i = 0; i < n && ok; i++)
	{
		if (v[i] + k <= l)
		{
			int tide = k;
			bool down = true;
			for (int j = i - cnt; j < i; j++)
			{
				tide += down ? -1 : 1;
				if (down) tide -= std::max(0, v[j] + tide - l);
				if (tide < 0 || v[j] + tide > l)
				{
					ok = false;
					break;
				}
				if (tide == 0) down = false;
			}
			cnt = 0;
		}
		else cnt++;
		if (cnt >= 2 * k)
		{
			std::cout << "No" << std::endl;
			return;
		}
	}
	int tide = k;
	bool down = true;
	for (int j = n - cnt; j < n; j++)
	{
		tide += down ? -1 : 1;
		if (down) tide -= std::max(0, v[j] + tide - l);
		if (tide < 0 || v[j] + tide > l)
		{
			ok = false;
			break;
		}
		if (tide == 0) down = false;
	}

	if (!ok) std::cout << "No" << std::endl;
	else std::cout << "Yes" << std::endl;
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
