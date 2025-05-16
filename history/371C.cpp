#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	std::string r;
	std::cin >> r;
	int b, s, c;
	std::cin >> b >> s >> c;
	int pb, ps, pc;
	std::cin >> pb >> ps >> pc;
	long long int m;
	std::cin >> m;
	std::unordered_map<char, int> map;
	for (char c : r)
		map[c]++;
	auto check = [&](long long int x) -> bool
	{
		long long int aa = x * map['B'], bb = x * map['S'], cc = x * map['C'];
		long long int money = 0;
		if (aa > b) money += (aa - b) * pb;
		if (bb > s) money += (bb - s) * ps;
		if (cc > c) money += (cc - c) * pc;
		return money <= m;
	};
	long long int L = 0, R = m + 100;
	while (L < R)
	{
		long long int mid = (L + R + 1) / 2;
		if (check(mid)) L = mid;
		else R = mid - 1;
	}
	std::cout << L << std::endl;
	__Made in France__
}
