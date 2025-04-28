#include <bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int n, k;
	std::cin >> n >> k;
	std::string s;
	std::cin >> s;
	std::map<char, std::vector<int>> pos;
	for (int i = 0; i < n; i++)
		pos[s[i]].push_back(i);
	int q;
	std::cin >> q;
	while (q--)
	{
		std::string t;
		std::cin >> t;
		std::map<char, int> freq;
		for (char c : t)
			freq[c]++;
		int res = 0;
		for (auto [c, f] : freq)
		{
			res = std::max(res, pos[c][f - 1] + 1);
		}
		std::cout << res << "\n";
	}
}
