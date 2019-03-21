//
// Created by Jakub Kordel on 13.03.19.
//

#include "ComplexNumList.h"

ComplexNumList::ComplexNumList(){
    head = nullptr;
    numEl = 0;
}

ComplexNumList::~ComplexNumList(){
    clearList();
}

void ComplexNumList::addElement( const ComplexNum & cNum ){
    Element * newEl = new Element;
    newEl ->num = cNum;
    newEl ->next = head;
    head = newEl;
    ++numEl;
}

void ComplexNumList::deleteElement( std::size_t index ){
    if ( index > 0 && index < numEl ) {
        Element * buf = getElement(index + 1);
        delete getElement(index);
        --numEl;
        getElement(index - 1)->next = buf;
    }
    else if ( index == 0 ){
        Element * buf = getElement(1);
        delete getElement(0);
        head = buf;
        --numEl;
    }
}

ComplexNumList ComplexNumList::operator+(const ComplexNumList & list ) const {
	ComplexNumList newList;
	Element * temp = list.head;
	while ( temp ){
		newList.addElement( temp ->num );
		temp = temp ->next;
	}
	temp = head;
	while ( temp ){
		newList.addElement( temp ->num );
		temp = temp ->next;
	}
	return newList;
}

void ComplexNumList::operator+=( const ComplexNumList & list ){
	Element * temp = list.head;
	while ( temp ){
		addElement( temp ->num );
		temp = temp ->next;
	}
}

std::ostream & operator<<( std::ostream & os, const ComplexNumList & list ){
    ComplexNumList::Element * temp = list.head;
    while ( temp ){
        os << temp ->num << std::endl;
        temp = temp ->next;
    }
    return os;
}


ComplexNum & ComplexNumList::operator[]( std::size_t index ){
	return getElement( index );
}

ComplexNumList::Element * ComplexNumList::getElement( std::size_t index ){
	if ( index >= numEl || index < 0 )
	    return nullptr;
    Element * temp = head;
	while( index-- ){
		temp = temp ->next;
	}
	return temp;
}

size_t ComplexNumList::numberOfElements(){
    return numEl;
}

void ComplexNumList::clearList(){
    while ( numEl != 0 ){
        deleteElement(0);
    }
}

