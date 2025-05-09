#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

std::vector<int> buildSuffixArray(const std::string& s)
{
	int n = s.size(), k = 0;
	std::vector<int> sa(n), rank(n), tmp(n);

	for (int i = 0; i < n; i++)
	{
		sa[i] = i;
		rank[i] = s[i];
	}
	for (int i = 1; i < n; i <<= 1)
	{
		auto cmp = [&](int a, int b)
		{
			if (rank[a] != rank[b]) return rank[a] < rank[b];
			int ra = (a + i < n) ? rank[a + i] : -1;
			int rb = (b + i < n) ? rank[b + i] : -1;
			return ra < rb;
		};
		std::sort(sa.begin(), sa.end(), cmp);
		tmp[sa[0]] = 0;
		for (int j = 1; j < n; j++)
			tmp[sa[j]] = tmp[sa[j - 1]] + cmp(sa[j - 1], sa[j]);
		rank = tmp;
	}
	return sa;
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	std::string s;
	std::cin >> s;
	std::vector<int> v = buildSuffixArray(s);
	std::cout << s.size() << " ";
	std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, " "));
	__Made in France__
}
