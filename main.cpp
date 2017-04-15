#include "SmartInteger.hpp"

#include <iostream>
#include <limits>

int main() {
    std::cout << "Constructing n1 and n2..." << std::endl;
    SmartInteger n1(3);
    SmartInteger n2;
    std::cout << "n1.getValue() should be 3: " << n1.getValue() << std::endl;
    std::cout << "n2.getValue() should be 0: " << n2.getValue() << std::endl;
    std::cout << std::endl;

    // No need to implement custom copy assignment operator - this should just work
    std::cout << "Changing value of n2..." << std::endl;
    n2 = 3;
    std::cout << "n2.getValue() should be 3: " << n2.getValue() << std::endl;
    std::cout << std::endl;

    // No need to implement custom copy constructor - this should just work
    std::cout << "Constructing n3..." << std::endl;
    SmartInteger n3(n2);
    std::cout << "n3.getValue() should be 3: " << n3.getValue() << std::endl;

    // Add more code here!
	std::cout << "n1 + n2 should be 6 : " << n1 + n2 << std::endl;
	
	int maxInt = stud::numeric_limits<int>::max();
	SmartInteger nMax(maxInt);
	
	try {
		std::cout << "Max size int + 1 should throw error: " << nMax + 1 << std::endl;
	} catch (std::exception& e) {
		std::cout<<e.what() <<std::endl;
	}
    return 0;
}