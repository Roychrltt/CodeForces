#include <bits/stdc++.h>

static void solve(void)
{
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n; i++) {
		std::cin >> v[i];
	}
	int index = -1, maxCount = 0, end = -1;
	for (int i = 0; i < n; i++) {
		int cur = v[i], count = 0, tmp = 0, endReg = -1;
		for (int j = i + 1; j < n; j++) {
			if (v[j] < cur) tmp++;
			else if (v[j] > cur) tmp--;
			if (tmp > count)
			{
				count = tmp;
				endReg = j;
			}
		}
		if (count > maxCount)
		{
			index = i;
			end = endReg;
			maxCount = count;
		}
		else if (count > 0 && count == maxCount && v[i] > v[index])
		{
			index = i;
			end = endReg;
		}
	}
	if (index == -1)
	{
		std::cout << n << " " << n << std::endl;
		return;
	}
	std::cout << index + 1 << " " << end + 1 << std::endl;
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
