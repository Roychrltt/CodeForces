#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

static void solve(void)
{
	int n, q;
	std::cin >> n >> q;
	std::string s;
	std::cin >> s;
	std::set<int> b, c;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == 'b') b.insert(i);
		else if (s[i] == 'c') c.insert(i);
	}
	char c0, c1;
	int bc = 0;
	while (q--)
	{
		std::cin >> c0 >> c1;
		if (b.size() && c0 == 'b' && c1 == 'a')
		{
			int idx = *b.begin();
			s[idx] = 'a';
			b.erase(idx);
		}
		else if (b.size() && c0 == 'b' && c1 == 'c') bc++;
		else if (c.size() && c0 == 'c' && c1 == 'b')
		{
			int idx = *c.begin();
			s[idx] = 'b';
			c.erase(idx);
			b.insert(idx);
		}
		else if (b.size() && bc && c0 == 'c' && c1 == 'a')
		{
			int idx = *b.begin();
			s[idx] = 'a';
			b.erase(idx);
			bc--;
		}
		else if (c.size() && c0 == 'c' && c1 == 'a')
		{
			int idx = *c.begin();
			s[idx] = 'a';
			c.erase(idx);
		}
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
	__Made in France__
}
