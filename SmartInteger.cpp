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
    std::string operator<(const SmartInteger &lhs, const SmartInteger &rhs){

        int lhsNum, rhsNum;
        lhsNum = lhs.num;
        rhsNum = rhs.num;

        std::string lessThan = ((lhsNum < rhsNum) ? ("true") : ("flase"));

        return lessThan;
    }

    /**
     * @brief Overloaded operator for > for SmartInteger.
     *
     * @return String object specifying whether first parameter is greater than the second.
     */
    std::string operator>(const SmartInteger &lhs, const SmartInteger &rhs){

        int lhsNum, rhsNum;
        lhsNum = lhs.num;
        rhsNum = rhs.num;

        std::string greaterThan = ((lhsNum < rhsNum) ? ("true") : ("flase"));

        return greaterThan;
    }


    /**
     * @brief Overloaded operator for <= for SmartInteger.
     *
     * @return String object specifying whether first parameter is less than or equal to the second.
     */
    std::string operator<=(const SmartInteger &lhs, const SmartInteger &rhs){

        int lhsNum, rhsNum;
        lhsNum = lhs.num;
        rhsNum = rhs.num;

         std::string lessThanOrEqual = ((lhsNum <= rhsNum) ? ("true") : ("flase"));

        return lessThanOrEqual;

    }

    /**
     * @brief Overloaded operator for >= for SmartInteger.
     *
     * @return String object specifying whether first parameter is greater than or equal to the second.
     */
    std::string operator>=(const SmartInteger &lhs, const SmartInteger &rhs){

        int lhsNum, rhsNum;
        lhsNum = lhs.num;
        rhsNum = rhs.num;

         std::string greaterThanOrEqual = ((lhsNum >= rhsNum) ? ("true") : ("flase"));

        return greaterThanOrEqual;
    }

    /**
     * @brief Overloaded operator for == for SmartInteger.
     *
     * @return String object specifying whether first parameter is equal to the second.
     */
     std::string operator==(const SmartInteger &lhs, const SmartInteger &rhs){
        int lhsNum, rhsNum;
        lhsNum = lhs.num;
        rhsNum = rhs.num;

         std::string isEqual = ((lhsNum = rhsNum) ? ("true") : ("flase"));

        return isEqual;
     }
    

    /**
     * @brief Overloaded operator for != for SmartInteger.
     *
     * @return String object specifying whether first parameter is not equal to the second.
     */
    std::string operator!=(const SmartInteger &lhs, const SmartInteger &rhs){
        int lhsNum, rhsNum;
        lhsNum = lhs.num;
        rhsNum = rhs.num;

         std::string isnotEqual = ((lhsNum != rhsNum) ? ("true") : ("flase"));

        return isnotEqual;
    }
