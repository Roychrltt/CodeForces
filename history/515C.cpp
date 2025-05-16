#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int n;
	std::cin >> n;
	std::string s;
	std::cin >> s;
	std::vector<char> v;
	for (char c : s)
	{
		if (c == '2' || c == '3' || c == '5' || c == '7')
			v.push_back(c);
		else if (c == '4')
		{
			v.push_back('2');
			v.push_back('2');
			v.push_back('3');
		}
		else if (c == '6')
		{
			v.push_back('5');
			v.push_back('3');
		}
		else if (c == '8')
		{
			v.push_back('7');
			v.push_back('2');
			v.push_back('2');
			v.push_back('2');
		}
		else if (c == '9')
		{
			v.push_back('7');
			v.push_back('3');
			v.push_back('3');
			v.push_back('2');
		}
	}
	std::sort(v.begin(), v.end(), std::greater<>());
	for (char c : v) {
		std::cout << c;
	}
	std::cout << std::endl;
	__Made in France__
}
