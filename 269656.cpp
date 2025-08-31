#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

class SuffixArray {
	int n;
	std::vector<int> SA, tempSA, RA, tempRA, cnt;

	int getRA(int i) const {
		return (i < n) ? RA[i] : 0;
	}

	void radix_sort(int k) {
		int max_val = std::max(300, n);
		cnt.assign(max_val, 0);

		for (int i = 0; i < n; ++i)
			cnt[getRA(i + k)]++;

		for (int i = 1; i < max_val; ++i)
			cnt[i] += cnt[i - 1];

		for (int i = n - 1; i >= 0; --i) {
			int idx = getRA(SA[i] + k);
			tempSA[--cnt[idx]] = SA[i];
		}
		SA = tempSA;
	}

	public:
	std::vector<int> build(const std::string& s) {
		n = s.size();

		SA.resize(n);
		tempSA.resize(n);
		RA.resize(n);
		tempRA.resize(n);

		for (int i = 0; i < n; ++i) {
			SA[i] = i;
			RA[i] = s[i];
		}

		for (int k = 1; k < n; k <<= 1) {
			radix_sort(k);
			radix_sort(0);

			tempRA[SA[0]] = 0;
			int r = 0;

			for (int i = 1; i < n; ++i) {
				if (RA[SA[i]] != RA[SA[i - 1]] || getRA(SA[i] + k) != getRA(SA[i - 1] + k))
					r++;
				tempRA[SA[i]] = r;
			}
			RA = tempRA;

			if (RA[SA[n - 1]] == n - 1)
				break;
		}
		return SA;
	}
};

std::vector<int> buildSA(const std::string& s) {
	SuffixArray sa;
	return sa.build(s);
}

std::vector<int> buildLCP(const std::string &s, const std::vector<int> &sa)
{
	int n = s.size();
	std::vector<int> rank(n), lcp(n - 1);
	for (int i = 0; i < n; ++i)
		rank[sa[i]] = i;

	int h = 0;
	for (int i = 0; i < n; ++i)
	{
		if (rank[i] == 0) continue;
		int j = sa[rank[i] - 1];
		while (i + h < n && j + h < n && s[i + h] == s[j + h])
			++h;
		if (rank[i] >= 1) lcp[rank[i] - 1] = h;
		if (h > 0) --h;
	}
	return lcp;
}


int log2_floor(unsigned long i)
{
	return std::bit_width(i) - 1;
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	std::string s;
	std::cin >> s;
	s += '$';
	int q;
	std::cin >> q;
	std::vector<int> sa = buildSA(s);
	std::vector<int> rank(sa.size());
	for (int i = 0; i < sa.size(); i++)
		rank[sa[i]] = i;
	std::vector<int> lcp = buildLCP(s, sa);
	int n = lcp.size();
	int k = log2_floor(n);
	int st[k + 1][n];
	std::copy(v.begin(), v.end(), st[0]);
	for (int i = 1; i <= k; i++)
		for (int j = 0; j + (1 << i) <= n; j++)
			st[i][j] = std::min(st[i - 1][j], st[i - 1][j + (1 << (i - 1))]);

	auto compare = [&](int a, int b, int c, int d) -> bool
	{
		if (rank[a] <= rank[c] && )
	};
	std::vector<std::pair<int, int>> v(q);
	for (int i = 0; i < q; i++)
		std::cin >> v[i].first >> v[i].second;
	std::sort(v.begin(), v.end(), compare);
	while (q--)
	{
		int l, r;
		std::cin >> l >> r;
		int i = log2_floor(r - l + 1);
		int x = std::min(st[i][l], st[i][r - (1 << i) + 1]);
	}

	for (auto& [a, b] : v) std::cout << a << " " << b << std::endl;
	__Made in France__
}
