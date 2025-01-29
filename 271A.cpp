#include <iostream>
#include <set>

bool check(int year) {
    std::string s = std::to_string(year);
    std::set<char> digits(s.begin(), s.end());
    return digits.size() == 4;
}

int main() {
    int year;
    std::cin >> year;

    while (!check(++year)); 

    std::cout << year << std::endl;
    return 0;
}

