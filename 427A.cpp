#include <bits/stdc++.h>

int main()
{
	int t;
	std::cin >> t;
	int count = 0;
	int ans = 0;
	while (t--)
	{
		int x;
		std::cin >> x;
		if (x > 0) count += x;
		else
		{
			if (count > 0) count--;
			else ans++;
		}
	}
	std::cout << ans << std::endl;
	return 0;
}
