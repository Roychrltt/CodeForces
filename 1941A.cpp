#include <bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int t;
	std::cin >> t;
	while (t--)
	{
		int b, c, n;
		std::cin >> b >> c >> n;
		std::vector<int> vb(b);
		std::vector<int> vc(c);
		for (int i = 0; i < b; i++) {
			std::cin >> vb[i];
		}
		for (int i = 0; i < c; i++) {
			std::cin >> vc[i];
		}
		std::sort(vb.begin(), vb.end());
		std::sort(vc.begin(), vc.end());
		int sum = 0;
		for (int i = 0; i < b; i++) {
			for (int j = 0; j < c; j++) {
				if (vb[i] + vc[j] > n)
					break;
				sum++;

			}
		}
		std::cout << sum << std::endl;
	}
	return 0;
}
