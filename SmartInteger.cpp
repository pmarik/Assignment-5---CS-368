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
#include <limits>
#include <cmath>

const int maxInt = std::numeric_limits<int>::max();
const int minInt = std::numeric_limits<int>::min();
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
    SmartInteger::SmartInteger(int number) {
		this->num = number;
	}
        


    /**
     * @brief Getter for smartInteger's int value.
     *
     * @return The num of the smartInteger.
     */
    const int SmartInteger::getValue() const {
        return num;
    }


    std::ostream &operator<<(std::ostream &os, const SmartInteger &si){

        os << si.num;
        return os;
    }
	
	  bool operator<(const SmartInteger &lhs, const SmartInteger &rhs){

        int lhsNum, rhsNum;
        lhsNum = lhs.num;
        rhsNum = rhs.num;

        return ((lhsNum < rhsNum) ? (true) : (false));
    }

    /**
     * @brief Overloaded operator for > for SmartInteger.
     *
     * @return String object specifying whether first parameter is greater than the second.
     */
    bool operator>(const SmartInteger &lhs, const SmartInteger &rhs){

        int lhsNum, rhsNum;
        lhsNum = lhs.num;
        rhsNum = rhs.num;

        return ((lhsNum < rhsNum) ? (true) : (false));
    }


    /**
     * @brief Overloaded operator for <= for SmartInteger.
     *
     * @return String object specifying whether first parameter is less than or equal to the second.
     */
    bool operator<=(const SmartInteger &lhs, const SmartInteger &rhs){

        int lhsNum, rhsNum;
        lhsNum = lhs.num;
        rhsNum = rhs.num;

        return ((lhsNum <= rhsNum) ? (true) : (false));
    }

    /**
     * @brief Overloaded operator for >= for SmartInteger.
     *
     * @return String object specifying whether first parameter is greater than or equal to the second.
     */
    bool operator>=(const SmartInteger &lhs, const SmartInteger &rhs){

        int lhsNum, rhsNum;
        lhsNum = lhs.num;
        rhsNum = rhs.num;

        return ((lhsNum >= rhsNum) ? (true) : (false));
    }

    /**
     * @brief Overloaded operator for == for SmartInteger.
     *
     * @return String object specifying whether first parameter is equal to the second.
     */
     bool operator==(const SmartInteger &lhs, const SmartInteger &rhs){
        int lhsNum, rhsNum;
        lhsNum = lhs.num;
        rhsNum = rhs.num;

        return ((lhsNum == rhsNum) ? (true) : (false));
     }
    

    /**
     * @brief Overloaded operator for != for SmartInteger.
     *
     * @return String object specifying whether first parameter is not equal to the second.
     */
    bool operator!=(const SmartInteger &lhs, const SmartInteger &rhs){
        int lhsNum, rhsNum;
        lhsNum = lhs.num;
        rhsNum = rhs.num;

        return ((lhsNum != rhsNum) ? (true) : (false));
    }
	 
	 
	/**
     * @brief Overloaded operator for + for SmartInteger.
     *
     * @return SmartInteger& to si1 + si2
     */
	const SmartInteger& operator+(const SmartInteger &si1, const SmartInteger &si2) {
		
		int result;
			
		if (si2.num > 0) {
			if (maxInt - si2.num < si1.num) {
				throw std::exception();
			} else {
				result = si1.num + si2.num;
				const SmartInteger siResult = SmartInteger(result);
				const SmartInteger& ref = siResult;
				return ref;
			}
		} else {
			if (minInt - si2.num > si1.num) {
				throw std::exception();
			} else {
				result = si1.num + si2.num;
				const SmartInteger siResult = SmartInteger(result);
				const SmartInteger& ref = siResult;
				return ref;
			}
		}
		return si1;
		}
	
	/**
     * @brief Overloaded operator for - for SmartInteger.
     *
     * @return SmartInteger& to si1 - si2
     */
	const SmartInteger& operator-(const SmartInteger &si1, const SmartInteger &si2) {
			
			int result;
		if (si2.num < 0) {
			if ((maxInt + si2.num < si1.num) || (minInt + si2.num > si1.num)) {
				throw std::exception();	
			} else {
				result = si1.num - si2.num;
				const SmartInteger siResult = SmartInteger(result);
				const SmartInteger& ref = siResult;
				return ref;
			}
		} else {
			if ((maxInt - si2.num < si1.num) || (minInt + si2.num > si1.num)) {
				throw std::exception();	
			} else {
				result = si1.num - si2.num;
				const SmartInteger siResult = SmartInteger(result);
				const SmartInteger& ref = siResult;
				return ref;
			}
		}
		return si1;
	}
			
	/**
     * @brief Overloaded operator for * for SmartInteger.
     *
     * @return SmartInteger& to si1 * si2
     */	
	const SmartInteger& operator*(const SmartInteger &si1, const SmartInteger &si2) {
		
		int result;
		if (((si1.num == minInt || si1.num == maxInt) && (abs(si2.num) >= 1 )) ||
			((si2.num == minInt || si2.num == maxInt) && (abs(si1.num) >= 1 ))) {
			throw std::exception();
		}
		if ((maxInt / abs(si2.num) < abs(si1.num)) || (abs(minInt / si2.num) < abs(si1.num))) {
			throw std::exception();
		} else {
			result = si1.num * si2.num;
			const SmartInteger siResult = SmartInteger(result);
			const SmartInteger& ref = siResult;
			return ref;
		}
		return si1;
		
		
	}
	
	/**
     * @brief Overloaded operator for += for SmartInteger.
     *
     * @return SmartInteger& to si1 += si2
     */	
	SmartInteger& operator+=(SmartInteger& si1, SmartInteger& si2) {
			si1 = si1 + si2;
			return si1;
		}
			
	/**
     * @brief Overloaded operator for -= for SmartInteger.
     *
     * @return SmartInteger& to si1 -= si2
     */
	SmartInteger& operator-=(SmartInteger& si1, SmartInteger& si2) {
			si1 = si1 - si2;
			return si1;
		}
	
	/**
     * @brief Overloaded operator for *= for SmartInteger.
     *
     * @return SmartInteger& to si1 *= si2
     */
	SmartInteger& operator*=(SmartInteger& si1, SmartInteger& si2) {
			si1 = si1 * si2;
			return si1;
		}
		
	/**
     * @brief Overloaded operator for - for SmartInteger.
     *
     * @return SmartInteger& to -si
     */
	SmartInteger& operator-(SmartInteger& si) {
		si = SmartInteger(0) - si;
		return si;
	}
		
	/**
     * @brief Overloaded operator for ++ for SmartInteger.
     *
     * @return SmartInteger& to ++si
     */
	SmartInteger& operator++(SmartInteger& si) {
		si = si + SmartInteger(1);
		return si;
	}
	
	/**
     * @brief Overloaded operator for -- for SmartInteger.
     *
     * @return SmartInteger& to --si
     */
	SmartInteger& operator--(SmartInteger& si) {
		si = si - SmartInteger(1);
		return si;
	}
