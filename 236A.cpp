#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

int main()
{
	std::string s;
	std::cin >> s;
	std::vector<int> v(26);

	for (char c : s)
		if (v[c - 'a'] == 0)
			v[c - 'a'] = 1;
	if (std::accumulate(v.begin(), v.end(), 0) % 2)
		std::cout << "IGNORE HIM!" << std::endl;
	else
		std::cout << "CHAT WITH HER!" << std::endl;
	return 0;
}
