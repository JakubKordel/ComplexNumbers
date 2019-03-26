//
// Created by Jakub Kordel on 13.03.19.
//

#ifndef COMPLEXNUMBERS_COMPLEXNUMLIST_H
#define COMPLEXNUMBERS_COMPLEXNUMLIST_H

#include "ComplexNum.h"
#include <iostream>
#include <string>


class ComplexNumList {

    struct Element {
        ComplexNum num;
        Element * next;
    };

    Element * head;
    size_t numEl;

    Element * getElement( std::size_t index ) const ;

public:
    ComplexNumList();
    ComplexNumList( const ComplexNumList & list );
    ~ComplexNumList();
    void addElement( const ComplexNum & cNum );
    void deleteElement( std::size_t index );
    ComplexNumList & operator=( const ComplexNumList & list );
    ComplexNumList operator+( const ComplexNumList & list ) const;
    ComplexNumList & operator+=( const ComplexNumList & list );
    friend std::ostream & operator<<( std::ostream & os, const ComplexNumList & list );
    ComplexNum & operator[]( std::size_t index ) const;
    size_t numberOfElements() const ;
    void clearList();
};

#endif //COMPLEXNUMBERS_COMPLEXNUMLIST_H
