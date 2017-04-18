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

	//Test <<
    std::cout << n1 << n2 << n3;

    //Test <
    std::cout << std::endl;
    bool isLessThan = n2 < n1;
    std::cout << isLessThan << std::endl;

    //Test <=
    bool islessorequal = n2 <= n1;
    std::cout << islessorequal << std::endl;

    //Test >=
    bool isgreaterorequal = n2 >= n1;
    std::cout << isgreaterorequal << std::endl;

    //Test ==
    bool isequal = n2 == n1;
    std::cout << isequal << std::endl;


    //Test !=
    bool isnotequal = n2 != n1;
    std::cout << isnotequal << std::endl;
	
	// Test +
	std::cout << n1 << n2<<std::endl;
	std::cout << "n1 + n2 should be 6 : " << (n1 + n2).getValue()  << std::endl;
	
	
	int maxInt = std::numeric_limits<int>::max();
	int minInt = std::numeric_limits<int>::min();
	SmartInteger nMax(maxInt);
	SmartInteger nMin(minInt);
	
	//Test + w/ limit 
	try {
		std::cout << "Max size int + 1 should throw error: " << nMax + SmartInteger(1) << std::endl;
	} catch (std::exception& e) {
		std::cout<<e.what() <<std::endl;
	}
	
	//Test a - b
	std::cout << "n1 - n2 should be 0 : " << (n1 - n2).getValue() << std::endl;
	
	//Test - w/ limit
	
	try {
		std::cout << "Min int didnt throw exception" << nMin - SmartInteger(1) << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	
	//Test *
	std::cout << "n1 * n2 should be 9 : " << (n1 * n2).getValue() << std::endl;
	
	//Test * w/ limit 
	try {
		SmartInteger siErr = (nMin - SmartInteger(1)) * SmartInteger(2);
		std::cout << "Min didn't throw exception";
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	
	try {
		SmartInteger siErr = (nMin - SmartInteger(1)) * SmartInteger(-2);
		std::cout << "Min didn't throw exception";
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	
	//Test +=
	n3 += n2;
	std::cout << "n3 += n2 should be 6 : " << n3 << std::endl;
	
	
	//Test -=
	n3 -= n2;
	std::cout << "n3 -= n2 should be 3 : " << n3 << std::endl;
	
	//Test *=
	n3 *= n2;
	std::cout << "n3 *= n2 should be 9 : " << n3 << std::endl;
	
	//Test -a
	n3 = -n3;
	std::cout << "-n3 should be -9: " << n3 << std::endl;
	
	//Test ++
	++n3;
	std::cout << "++n3 should be -8: " << n3 << std::endl;
	
	//Test --
	--n3;
	std::cout << "--n3 should be -9: " << n3 << std::endl;

    return 0;
}
