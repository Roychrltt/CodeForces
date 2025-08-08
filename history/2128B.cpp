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
	std::string ans = "RL";
	int l = 1, r = n - 2, prev = v[0];
	bool up = v[n - 1] < v[0];
	while (ans.length() < n)
	{
		if (up && v[l] < prev)
		{
			ans += 'L';
			up ^= 1;
			prev = v[l++];
		}
		else if (up && v[r] < prev)
		{
			ans += 'R';
			up ^= 1;
			prev = v[r--];
		}
		else if (!up && v[l] > prev)
		{
			ans += 'L';
			up ^= 1;
			prev = v[l++];
		}
		else if (!up && v[r] > prev)
		{
			ans += 'R';
			up ^= 1;
			prev = v[r--];
		}
		else if (up)
		{
			if (v[l] - prev > v[r] - prev)
			{
				ans += 'L';
				prev = v[l++];
			}
			else
			{
				ans += 'R';
				prev = v[r--];
			}
		}
		else
		{
			if (prev - v[l] > prev - v[r])
			{
				ans += 'L';
				prev = v[l++];
			}
			else
			{
				ans += 'R';
				prev = v[r--];
			}
		}
	}
	std::cout << ans << std::endl;
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
