#include <bits/stdc++.h>

int main()
{
	int t;
	std::cin >> t;
	std::vector<int> v(t);
	int count = 1;
	while (t--)
	{
		int i;
		std::cin >> i;
		v[i - 1] = count;
		count++;
	}
	for (int i : v)
		std::cout << i << " ";
	return 0;
}
