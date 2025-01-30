#include <bits/stdc++.h>

int main()
{
	std::vector<int> arr(4);
	std::cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
	std::sort(arr.begin(), arr.end());
	int count = 0;
	for (int i = 1; i < 4; i++) {
		if (arr[i] == arr[i - 1])
			count++;
	}
	std::cout << count << std::endl;
	return 0;
}
