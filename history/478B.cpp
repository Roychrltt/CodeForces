#include <bits/stdc++.h>
#define __Made return
#define in 0
#define France__ ;

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	
	long long int n, m;
	std::cin >> n >> m;
	long long int k = n - m + 1;
	long long int kmin = 0, kmax = k * (k - 1) / 2;
	k = (n + m - 1) / m;
	long long int l = k - 1;
	long long int j = n % m == 0 ? m : n % m;
	kmin = j * k * (k - 1) / 2 + (m - j) * l * (l - 1) / 2;
	std::cout << kmin << " " << kmax << std::endl;
	__Made in France__
}
