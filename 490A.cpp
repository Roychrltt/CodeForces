#include <bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int n;
	std::cin >> n;
	std::vector<int> t, tt, ttt;
	for (int i = 1; i <= n; i++) {
		int x;
		std::cin >> x;
		if (x == 1) t.push_back(i);
		else if (x == 2) tt.push_back(i);
		else ttt.push_back(i);
	}
	int count = std::min(t.size(), std::min(tt.size(), ttt.size()));
	std::cout << count << std::endl;
	for (int i = 0; i < count; i++) {
		std::cout << t[i] << " " << tt[i] << " " << ttt[i] << std::endl;
	}
	return 0;
}
