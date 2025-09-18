#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n;
	std::cin >> n;
	std::string ans = "";
	std::set<std::string> st;
	for (int i = 0; i < n; i++)
	{
		int len;
		std::cin >> len;
		std::string s = "";
		char c;
		for (int j = 0; j < len; j++)
		{
			std::cin >> c;
			s += c;
		}
		st.insert(s);
	}
	while (!st.empty())
	{
		ans += *st.begin();
		int x = (*st.begin()).size();
		std::set<std::string> tmp;
		for (auto& s : st)
			if (s.size() > x) tmp.insert(s.substr(x));
		st = tmp;
		std::cout << "NO" << std::endl;
	}
	for (char c : ans) std::cout << c << " ";
	std::cout << std::endl;
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
