#include <iostream>

#include <string>

int main()
{
	std::string s = "test";
	std::cin >> s;
	std::cout << "string is: "<< s<< std::endl;
	std::cin.ignore();
	std::getline(std::cin, s);
	std::cout << "string is: "<< s << std::endl;
return 0;
}
