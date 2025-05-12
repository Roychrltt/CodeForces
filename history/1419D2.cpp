#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		std::cin >> v[i];
	}
	std::sort(v.begin(), v.end(), std::greater<>());
	std::vector<int> vis(n), ans(n);
	vis[0] = 1, ans[0] = v[0];
	int l = 1, r = n - (n - 1) / 2, i = 1;
	int cnt = 0;
	while (r < n)
	{
		if (v[r] < v[l])
		{
			vis[r] = 1;
			vis[l] = 1;
			ans[i++] = v[r++];
			ans[i++] = v[l++];
			cnt++;
		}
		else
		{
			r++;
		}
	}
	std::cout << cnt << std::endl;
	int j = 1;
	while (i < n)
	{
		while (j < n && vis[j]) j++;
		ans[i++] = v[j];
	}
	std::copy(ans.begin(), ans.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;
	__Made in France__
}
