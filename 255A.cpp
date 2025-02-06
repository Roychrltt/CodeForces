#include <bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int n;
	std::cin >> n;
	int chest = 0, biceps = 0, back = 0;
	for (int i = 0; i < n; i++)
	{
		int x;
		std::cin >> x;
		if (i % 3 == 0) chest += x;
		else if (i % 3 == 1) biceps += x;
		else back += x;
	}
	if (chest > back && chest > biceps) std::cout << "chest" << std::endl;
	else if (back > chest && back > biceps) std::cout << "back" << std::endl;
	else std::cout << "biceps" << std::endl;
	return 0;
}
