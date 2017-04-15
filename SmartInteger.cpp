///////////////////////////////////////////////////////////////////////////////
// File Name:      SmartInteger.cpp
//
// Author:         Paul Marik, David Wissink
// CS email:       marik@cs.wisc.edu, wissink@cs.wisc.edu
//
// Description:    The implementation file for the SmartInteger class.
//
///////////////////////////////////////////////////////////////////////////////


#include "SmartInteger.hpp"

    /**
     * @brief Default constructor for Smartinteger.
     *
     */
    SmartInteger::SmartInteger(){
        num = 0;
    }

/**
     * @brief A parameterised constructor for a Student.
     *
     * @param num Int value.
     */
    SmartInteger::SmartInteger(int num){
        this->num = num;
    }


    /**
     * @brief Getter for smartInteger's int value.
     *
     * @return The num of the smartInteger.
     */
    const int SmartInteger::getValue(){
        return num;
    }


    std::ostream &operator<<(std::ostream &os, const SmartInteger &si){

        os << si.num;
        return os;
    }
	
	const SmartInteger &operator+(const SmartInteger &si1,
			const SmartInteger &si2) {
				
				int result = si1.num + si2.num;
				if ((si1.num > 0 && si2.num > 0 && result < 0) || (si1.num < 0 && si2.num < 0 && result > 0)) {
					throw std::exception();
				} else {
					const SmartInteger siResult = SmartInteger(result);
					const SmartInteger& ref = siResult;
					return ref;
				}
				return si1;
			}