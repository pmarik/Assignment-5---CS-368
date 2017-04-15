///////////////////////////////////////////////////////////////////////////////
// File Name:      SmartInteger.hpp
//
// Author:         Paul Marik, David Wissink
// CS email:       marik@cs.wisc.edu, wissink@cs.wisc.edu
//
// Description:    The header file for the SmartInteger class.
//
///////////////////////////////////////////////////////////////////////////////

#ifndef A5_SMARTINTEGER_HPP
#define A5_SMARTINTEGER_HPP

#include <string>
#include <vector>
#include <iostream>


/**
 * @brief An abstract base class for a SmartInteger.
 */
class SmartInteger{
    private:

        int num;

    public:

        /**
     * @brief Default constructor for Smartinteger.
     *
     */
        SmartInteger();


        /**
     * @brief A parameterised constructor for a Student.
     *
     * @param num Int value.
     */
        SmartInteger(int num);


        /**
     * @brief Getter for smartInteger's int value.
     *
     * @return The num of the smartInteger.
     */
        const int &getValue();


          /**
     * @brief Overloaded operator for << for ostream and SmartInteger.
     *
     * @return Ostream object.
     */
        friend std::ostream& operator<<(std::ostream& os, const SmartInteger::SmartInteger& si);

};

#endif //A5_SMARTINTEGER_HPP
