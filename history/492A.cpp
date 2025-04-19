#include <bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int n;
	std::cin >> n;
	int level = 0, used = 0;
    while (used + (level + 1) * (level + 2) / 2 <= n) {
        level++;
        used += level * (level + 1) / 2;
    }

	std::cout << level << std::endl;
	return 0;
}
