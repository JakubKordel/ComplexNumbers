//
// Created by Jakub Kordel on 13.03.19.
//

#ifndef COMPLEXNUMBERS_COMPLEXNUM_H
#define COMPLEXNUMBERS_COMPLEXNUM_H

#include <iostream>
#include <string>

class ComplexNum {
protected:
    double realPart;
    double imPart;
public:
    ComplexNum( double real = 0, double im = 0 );
    void operator=( const ComplexNum & cNum );
    ComplexNum operator+( const ComplexNum & cNum );
    void operator+=( const ComplexNum & cNum );
    ComplexNum operator-( const ComplexNum & cNum );
    void operator-=( const ComplexNum & cNum );
    bool operator==( const ComplexNum & cNum );
    bool operator!=( const ComplexNum & cNum );
    friend std::ostream & operator<<( std::ostream & os, const ComplexNum & cNum );
};

#endif //COMPLEXNUMBERS_COMPLEXNUM_H
