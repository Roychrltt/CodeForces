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
	std::string s = "";
	s.append(50, 'a');
	std::cout << s << std::endl;
	for (int i = 0; i < n; i++)
	{
		std::string ss = s.substr(0, v[i]);
		for (int j = v[i]; j < 50; j++)
			ss += 'a' + (s[j] - 'a' + 1) % 26;
		std::cout << ss << std::endl;
		s = ss;
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
