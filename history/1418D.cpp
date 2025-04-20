#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int n, k;
	std::cin >> n >> k;
	std::set<int> set;
	std::multiset<int> mset;
	for (int i = 0; i < n; i++)
	{
		int x;
		std::cin >> x;
		set.insert(x);
	}
	auto itt = set.begin();
	auto prev = itt++;
	while (itt != set.end())
	{
		mset.insert(*itt - *prev);
		prev = itt++;
	}
	if (set.size() < 3) std::cout << 0 << std::endl;
	else
		std::cout << *(--set.end()) - *(set.begin()) - *(--mset.end()) << std::endl;
	while (k--)
	{
		int a, b;
		std::cin >> a >> b;
		if (a == 1)
		{
			if (!set.empty())
			{
				if (*(set.begin()) > b)
					mset.insert(*(set.begin()) - b);
				else if (b > *set.rbegin())
					mset.insert(b - *(set.rbegin()));
				else
				{
					auto it = set.upper_bound(b);
					auto prev = std::prev(it);
					int left = *prev;
					int right = *it;
					int ori = right - left;
					mset.erase(mset.find(ori));
					mset.insert(b - left);
					mset.insert(right - b);
				}
			}
			set.insert(b);
		}
		else
		{
			auto it = set.find(b);
			if (set.size() == 1) {
				set.erase(it);
			}
			else if (it == set.begin()) {
				auto next = std::next(it);
				mset.erase(mset.find(*next - b));
				set.erase(it);
			}
			else if (std::next(it) == set.end()) {
				auto prev = std::prev(it);
				mset.erase(mset.find(b - *prev));
				set.erase(it);
			}
			else {
				auto prev = std::prev(it);
				auto next = std::next(it);
				int left = *prev;
				int right = *next;
				mset.erase(mset.find(b - left));
				mset.erase(mset.find(right - b));
				mset.insert(right - left);
				set.erase(it);
			}
		}
		if (set.size() < 3) std::cout << 0 << std::endl;
		else
			std::cout << *(--set.end()) - *(set.begin()) - *(--mset.end()) << std::endl;
	}
	__Made in France__
}
