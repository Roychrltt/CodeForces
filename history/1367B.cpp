#include <vector>
#include <iostream>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int t;
	std::cin >> t;
	while (t--)
	{
		int n;
		std::cin >> n;
		std::vector<int> v(n);
		int countOdd = 0;
		int count = 0;
		for (int i = 0; i < n; i++) {
			std::cin >> v[i];
			if (v[i] & 1) countOdd++;
			if ((v[i] & 1) && !(i & 1)) count++;
		}
		if (countOdd != n / 2)
			std::cout << -1 << std::endl;
		else
			std::cout << count << std::endl;
	}
	return 0;
}
