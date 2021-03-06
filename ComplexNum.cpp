//
// Created by Jakub Kordel on 13.03.19.
//

#include "ComplexNum.h"

ComplexNum::ComplexNum ( double real, double im ){
    realPart = real;
    imPart = im;
}

void ComplexNum::set( double real, double im ){
    realPart = real;
    imPart = im;
}

ComplexNum & ComplexNum::operator=( const ComplexNum & cNum ){
    realPart = cNum.realPart;
    imPart = cNum.imPart;
    return *this;
}

ComplexNum ComplexNum::operator+( const ComplexNum & cNum ){
    ComplexNum sum( realPart + cNum.realPart, imPart + cNum.imPart );
    return sum;
}

ComplexNum & ComplexNum::operator+=( const ComplexNum & cNum ){
    realPart += cNum.realPart;
    imPart += cNum.imPart;
    return *this;
}

ComplexNum ComplexNum::operator-( const ComplexNum & cNum ){
    ComplexNum diff( realPart - cNum.realPart, imPart - cNum.imPart );
    return diff;
}

ComplexNum & ComplexNum::operator-=( const ComplexNum & cNum ){
    realPart -= cNum.realPart;
    imPart -= cNum.imPart;
    return *this;
}

bool ComplexNum::operator== ( const ComplexNum & cNum ){
    return realPart == cNum.realPart && imPart == cNum.imPart;
}

bool ComplexNum::operator!= ( const ComplexNum & cNum ){
    return !( realPart == cNum.realPart && imPart == cNum.imPart );
}

std::ostream & operator<<( std::ostream & os, const ComplexNum & cNum ){
    std::string sign = "+";
    std::string i = "i";
    if ( cNum.imPart <= 0 )
        sign = "";
    if ( cNum.imPart == 0 )
        i = "";
    os << cNum.realPart << sign << cNum.imPart << i;
    return os;
}