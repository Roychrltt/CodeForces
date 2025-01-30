#include <iostream>

int main(void)
{
	std::string a, b, c, d;
	int x;
	std::cin >> x;
	std::cin.ignore();
	std::getline(std::cin, a);
	std::cin.ignore();
	std::getline(std::cin, b);
	std::cin.ignore();
	std::getline(std::cin, c);
	std::cin.ignore();
	std::getline(std::cin, d);
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	return 0;
}
