#include <bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int n;
	std::cin >> n;
	std::vector<std::string> v(n);
	for (int i = 0; i < n; i++) {
		std::cin >> v[i];
	}
	bool flag = false;
	for (int i = 0; i < n; i++) {
		if (v[i][0] == 'O' && v[i][1] == 'O')
		{
			v[i][0] = '+';
			v[i][1] = '+';
			flag = true;
			break;
		}
		else if (v[i][3] == 'O' && v[i][4] == 'O')
		{
			v[i][3] = '+';
			v[i][4] = '+';
			flag = true;
			break;
		}
	}
	if (!flag) std::cout << "NO" << std::endl;
	else
	{
		std::cout << "YES" << std::endl;
		for (auto& s : v)
			std::cout << s << std::endl;
	}
	return 0;
}
