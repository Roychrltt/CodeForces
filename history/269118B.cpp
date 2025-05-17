#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

class SuffixArray {
		int n;
		std::vector<int> SA, tempSA, RA, tempRA, cnt;
		std::string T;

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
		std::vector<int> build(const std::string& input) {
			T = input + "$";
			n = T.size();

			SA.resize(n);
			tempSA.resize(n);
			RA.resize(n);
			tempRA.resize(n);

			for (int i = 0; i < n; ++i) {
				SA[i] = i;
				RA[i] = T[i];
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

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	
	std::string s;
	std::cin >> s;
	std::vector<int> v = buildSA(s);
	int t;
	std::cin >> t;
	while (t--)
	{
		std::string ss;
		std::cin >> ss;
		auto lower = std::lower_bound(v.begin(), v.end(), ss, [&](int x, const auto& ss){ return s.compare(x, ss.size(), ss) < 0;});
		auto upper = std::lower_bound(v.begin(), v.end(), ss, [&](int x, const auto& ss){ return s.compare(x, ss.size(), ss) <= 0;});
		std::cout << upper - lower << std::endl;
	}
	__Made in France__
}
