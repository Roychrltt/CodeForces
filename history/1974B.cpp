#include <bits/stdc++.h>

static void solve(void)
{
	int n;
	std::cin >> n;
	std::string s;
	std::cin >> s;
	std::vector<int> v(26);
	std::string decode = "";
	for (int i = 0; i < n; i++) {
		if (v[s[i] - 'a']++ == 0) decode += s[i];
	}
	std::sort(decode.begin(), decode.end());
	int len = decode.length();
	for (int i = 0; i < n; i++) {
		int x = decode.find(s[i]);
		s[i] = decode[len - x - 1];
	}
	std::cout << s << std::endl;
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
