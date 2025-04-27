#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	long long int n;
	std::cin >> n;

	int l = 1, r = 40;
	while (l < r)
	{
		long long int mid = (l + r) / 2;
		if (std::pow(mid, 10) > n)
			r = mid;
		else l = mid + 1;
	}
	long long int cnt = 0, k = std::pow(l, 10);
	for (int i = 0; i < 10; i++)
	{
		if (k / l * (l - 1) < n) break;
		cnt++;
		k = k / l * (l - 1);
	}
	std::string s = "codeforces";
	std::string ans;
	int i = 0;
	while (i < cnt)
		ans.append(l - 1, s[i++]);
	while (i < 10)
		ans.append(l, s[i++]);
	std::cout << ans << std::endl;
	__Made in France__
}
