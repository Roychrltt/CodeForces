#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int len, sum;
	std::cin >> len >> sum;
	if (sum == 0 && len == 1)
		std::cout << "0 0" << std::endl;
	else if (sum == 0 || sum > len * 9)
		std::cout << "-1 -1" << std::endl;
	else
	{
		std::string s = "";
		int tmp = sum, tmpl = len;
		while (len--)
		{
			int x = std::min(9, sum);
			s += '0' + x;
			sum -= x;
		}
		std::string r = "";
		if (tmp == 9 * tmpl) r += '9';
		else r += std::max(1, tmp - 9 * (tmpl - 1)) + '0';
		tmpl--;
		tmp -= r[0] - '0';
		while (tmpl--)
		{
			int x = std::max(0, tmp - tmpl * 9);
			r += '0' + x;
			tmp -= x;
		}
		std::cout << r << " " << s << std::endl;
	}
	__Made in France__
}
