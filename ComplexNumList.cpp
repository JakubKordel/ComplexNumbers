//
// Created by Jakub Kordel on 13.03.19.
//

#include "ComplexNumList.h"
#include <stdexcept>

ComplexNumList::ComplexNumList(){
    head = nullptr;
}

ComplexNumList::~ComplexNumList(){
    clearList();
}

void ComplexNumList::addElement( const ComplexNum & cNum ){
    Element * newEl = new Element;
    newEl ->num = cNum;
    newEl ->next = head;
    head = newEl;
}

void ComplexNumList::deleteElement( std::size_t i ){
    Element * temp = head;
	while 

}

ComplexNumList ComplexNumList::operator+( const ComplexNumList & list ){
	Element * temp = head;
    

}

void ComplexNumList::operator+=( const ComplexNumList & list ){

    // TODO 
}

std::ostream operator<<( std::ostream & os, const & ComplexNumList ){

    // TODO
}

ComplexNum & ComplexNumList::operator[]( std::size_t index ){

	Element* node = head;
	while( index-- ) {
		if(node == nullptr) {
			throw std::out_of_range{"invalid index int ComplexNumList::operator[]"};
		}

		node = node->head;	
	}

	return node->num;

}

void ComplexNumList::clearList(){

    // TODO 
}
