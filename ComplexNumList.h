//
// Created by Jakub Kordel on 13.03.19.
//

#ifndef COMPLEXNUMBERS_COMPLEXNUMLIST_H
#define COMPLEXNUMBERS_COMPLEXNUMLIST_H

#include "ComplexNum.h"
#include <iostream>
#include <string>

struct Element {
    ComplexNum num;
    Element * next;
};

class ComplexNumList {
    Element * head;
public:
    ComplexNumList();
    ~ComplexNumList();
    void addElement( const ComplexNum & cNum );
    void deleteElement( const ComplexNum & cNum );
    ComplexNumList operator+( const ComplexNumList & list );
    void operator+=( const ComplexNumList & list );
    friend std::ostream operator<<( std::ostream & os, const & ComplexNumList );
    ComplexNum & operator[]();
    void clearList();
};

#endif //COMPLEXNUMBERS_COMPLEXNUMLIST_H
