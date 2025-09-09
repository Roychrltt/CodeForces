#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int n1, n2, n3, n4;
	std::vector<int> a(n1), b(n2), c(n3), d(n4);
	for (int i = 0; i < n1; i++) std::cin >> a[i];
	for (int i = 0; i < n2; i++) std::cin >> b[i];
	for (int i = 0; i < n3; i++) std::cin >> c[i];
	for (int i = 0; i < n4; i++) std::cin >> d[i];
	b.push_back(INT_MAX);
	c.push_back(INT_MAX);
	d.push_back(INT_MAX);
	a.push_back(INT_MAX);
	int idx1 = 0, idx2 = 0, idx3 = 0, idx4 = 0;
	auto diff = [](std::vector<int>& v)
	{
		return std::max({v[0], v[1], v[2], v[3]}) - std::min({v[0], v[1], v[2], v[3]});
	};
	std::vector<int> ans = {0, 0, INT_MAX, INT_MAX}, tmp(4);
	int mn = INT_MAX;
	while (idx1 < n1)
	{
		while (idx2 < n2 && b[idx2 + 1] < a[idx1]) idx2++;
		while (idx3 < n3 && c[idx3 + 1] < a[idx1]) idx3++;
		while (idx4 < n4 && d[idx4 + 1] < a[idx1]) idx4++;
		tmp[0] = idx1 < n1 ? a[idx1] : a[idx1 - 1];
		tmp[1] = idx2 < n2 ? b[idx2] : b[idx2 - 1];
		tmp[2] = idx3 < n3 ? c[idx3] : c[idx3 - 1];
		tmp[3] = idx4 < n4 ? d[idx4] : d[idx4 - 1];
		if (diff(tmp) < diff(ans)) ans = tmp;
	}
	std::copy(ans.begin(), ans.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;
	__Made in France__
}
