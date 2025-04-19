#include <bits/stdc++.h>

int main()
{
	std::vector<int> v(26);
	std::vector<int> vv(26);
	std::string s, ss, sss;
	std::cin >> s >> ss >> sss;
	for (int i = 0; i < s.length(); i++)
		v[s[i]- 'A']++;
	for (int i = 0; i < ss.length(); i++)
		v[ss[i]- 'A']++;
	for (int i = 0; i < sss.length(); i++)
		vv[sss[i]- 'A']++;
	if (v == vv)
		std::cout << "YES" << std::endl;
	else
		std::cout << "NO" << std::endl;
	return 0;
}
