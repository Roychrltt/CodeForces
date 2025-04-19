#include <iostream>
#include <vector>

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
		std::string s;
		std::cin >> s;
		int l = 0, r = n - 1;
		while (l < r)
		{
			if (s[l] == s[r])
				break;
			n -= 2;
			l++;
			r--;
		}
		std::cout << n << std::endl;
	}
	return 0;
}
