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

// ------------------ This string s is supposed to be appended with a '$' -------------------
std::vector<int> buildSA(const std::string& s) {
	SuffixArray sa;
	return sa.build(s);
}

// ------------------ This string s is supposed to be appended with a '$' -------------------
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

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	std::string s, t;
	std::cin >> s >> t;
	int n = s.size();
	s += '#';
	s += t;
	s += '$';
	std::vector<int> sa = buildSA(s), lcp = buildLCP(s, sa);
	int mx = 0, idx = -1;
	for (int i = 0; i < lcp.size(); i++)
	{
		if ((sa[i] <= n && sa[i + 1] <= n) || (sa[i] > n && sa[i + 1] > n)) continue;
		if (lcp[i] > mx)
		{
			mx = lcp[i];
			idx = i;
		}
	}
	if (idx == -1)
	{
		std::cout << std::endl;
		return 0;
	}
	std::string ans = s.substr(sa[idx], mx);
	std::cout << ans << std::endl;
	__Made in France__
}
