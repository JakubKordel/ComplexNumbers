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
public:
    ComplexNumList();
    ~ComplexNumList();
    void addElement( const ComplexNum & cNum );
    void deleteElement( std::size_t index );
    ComplexNumList operator+( const ComplexNumList & list );
    void operator+=( const ComplexNumList & list );
    friend std::ostream & operator<<( std::ostream & os, const ComplexNumList & list );
    Element * operator[]( std::size_t index );
    size_t numberOfElements();
    void clearList();
};

#endif //COMPLEXNUMBERS_COMPLEXNUMLIST_H
