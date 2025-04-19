#include <iostream>
#include <vector>

int main()
{
	int n, k;
	std::cin >> n >> k;
	std::vector<int> v(n);
	int count = 0;
	for (int i = 0; i < n; i++) {
		std::cin >> v[i];
	}
	if (v[0] <= 0)
	{
		std::cout << 0 << std::endl;
		return 0;
	}
	int toFind = std::max(1, v[k - 1]);
	for (int i = 0; i < n; i++) {
		if (v[i] >= toFind)
			count++;
	}
	std::cout << count << std::endl;
	return 0;
}
