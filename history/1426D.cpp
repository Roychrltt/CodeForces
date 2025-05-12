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
	std::vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		std::cin >> v[i];
	}
	std::set<long long int> set;
	long long int sum = 0;
	set.insert(sum);
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		sum += v[i];
		if (set.find(sum) != set.end())
		{
			cnt++;
			sum = v[i];
			set.clear();
			set.insert(sum);
			set.insert(0);
		}
		else
			set.insert(sum);
	}
		
	std::cout << cnt << std::endl;
	__Made in France__
}
