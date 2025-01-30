#include <bits/stdc++.h>

int main()
{
	int t;
	std::cin >> t;
	std::vector<int> v = {1, 5, 10, 20, 100};
	int count = 0;
	while (t)
	{
		for (int i = 4; i >= 0; i--) {
			if (t >= v[i])
			{
				count += t / v[i];
				t = t % v[i];
				break;
			}

		}
	}
	std::cout << count << std::endl;
	return 0;
}
