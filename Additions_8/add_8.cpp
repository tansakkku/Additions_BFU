#include <iostream>
#include "Header.hpp"

int main()
{
	
	float H, A, B;

	std::cout << "Storona malay: ";
	std::cin >> A;
	std::cout << "Storona bolsh.: ";
	std::cin >> B;
	std::cout << "Visota: ";
	std::cin >> H;



	hd::Trap T(A, B, H);

	std::cout << "S: " << T.S() << " P: " << T.P() << std::endl;
	return 0;
}
