#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int n;
	std::cin >> n;
	std::pair<int, std::string> a = {0, ""}, b = {0, ""}, c = {0, ""}, ab = {0, ""}, bc = {0, ""}, ac = {0, ""}, abc = {0, ""};
	for (int i = 0; i < n; i++)
	{
		int x;
		std::string vtm;
		std::cin >> x >> vtm;
		std::sort(vtm.begin(), vtm.end());
		if (vtm.find('A') != std::string::npos && (x < a.first || a.second == "")) a = {x, vtm};
		if (vtm.find('B') != std::string::npos && (x < b.first || b.second == "")) b = {x, vtm};
		if (vtm.find('C') != std::string::npos && (x < c.first || c.second == "")) c = {x, vtm};
		if (vtm == "AC" && (ac.second == "" || x < ac.first)) ac = {x, vtm};
		if (vtm == "BC" && (bc.second == "" || x < bc.first)) bc = {x, vtm};
		if (vtm == "AB" && (ab.second == "" || x < ab.first)) ab = {x, vtm};
		if (vtm == "ABC" && (abc.second == "" || x < abc.first)) abc = {x, vtm};
	}
	if (a.second == "" || b.second == "" || c.second == "")
	{
		std::cout << -1 << std::endl;
		return 0;
	}
	int ans = a.first + b.first + c.first;
	int tmp = ans;
	if (abc.second != "") ans = std::min(ans, abc.first);
	if (ab.second != "") ans = std::min(ans, ab.first + c.first);
	if (ac.second != "") ans = std::min(ans, ac.first + b.first);
	if (bc.second != "") ans = std::min(ans, bc.first + a.first);
	std::cout << ans << std::endl;
	__Made in France__
}
