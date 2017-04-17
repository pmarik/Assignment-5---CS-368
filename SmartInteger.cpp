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


     /**
     * @brief Overloaded operator for << for ostream and SmartInteger.
     *
     * @return Ostream object.
     */
    std::ostream &operator<<(std::ostream &os, const SmartInteger &si){

        os << si.num;
        return os;
    }


     /**
     * @brief Overloaded operator for < for SmartInteger.
     *
     * @return String object specifying whether first parameter is less than the second.
     */
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

        return ((lhsNum = rhsNum) ? (true) : (false));
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
