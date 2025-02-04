#include <bits/stdc++.h>

static void solve(void)
{
	int n;
	std::cin >> n;
	std::unordered_map<std::string, int> map1;
	std::unordered_map<std::string, int> map2;
	std::unordered_map<std::string, int> map3;
	for (int i = 0; i < n; i++) {
		std::string s;
		std::cin >> s;
		map1[s]++;
	}
	for (int i = 0; i < n; i++) {
		std::string s;
		std::cin >> s;
		map2[s]++;
	}
	for (int i = 0; i < n; i++) {
		std::string s;
		std::cin >> s;
		map3[s]++;
	}
	int a = 0, b = 0, c = 0;
	for (auto [s, _] : map1) {
		int count = map2.count(s) + map3.count(s);
		if (count == 0) a += 3;
		else if (count == 1) a += 1;
	}
	for (auto [s, _] : map2) {
		int count = map1.count(s) + map3.count(s);
		if (count == 0) b += 3;
		else if (count == 1) b += 1;
	}
	for (auto [s, _] : map3) {
		int count = map2.count(s) + map1.count(s);
		if (count == 0) c += 3;
		else if (count == 1) c += 1;
	}
	std::cout << a << " " << b << " " << c << std::endl;
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
