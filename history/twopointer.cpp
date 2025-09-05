#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

struct Stack {
	std::vector<long long> stk, val = {0};

	void push(long long x)
	{
		stk.push_back(x);
		val.push_back(std::gcd(val.back(), x));
	}

	long long top() { return val.back();}

	long long pop()
	{
		long long x = stk.back();
		stk.pop_back();
		val.pop_back();
		return x;
	}

	bool empty()
	{
		return stk.empty();
	}
} s1, s2;


void remove()
{
	if (s1.empty())
		while (!s2.empty()) s1.push(s2.pop());
	s1.pop();
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	long long int n;
	std::cin >> n;
	std::vector<long long int> v(n);
	for (int i = 0; i < n; i++)
		std::cin >> v[i];
	int l = 0, ans = n + 1;
	for (int i = 0; i < n; i++)
	{
		s2.push(v[i]);
		while (std::gcd(s1.top(), s2.top()) == 1)
		{
			remove();
			ans = std::min(ans, i - l + 1);
			l++;
		}
	}
	if (ans > n) ans = -1;
	std::cout << ans << std::endl;
	__Made in France__
}
