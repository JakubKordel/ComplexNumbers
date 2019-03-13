//
// Created by Jakub Kordel on 13.03.19.
//

#include "ComplexNumList.h"

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

void ComplexNumList::deleteElement( const ComplexNum & cNum ){

    \\ TODO \\

}

ComplexNumList ComplexNumList::operator+( const ComplexNumList & list ){

    \\ TODO \\

}

void ComplexNumList::operator+=( const ComplexNumList & list ){

    \\ TODO \\
}

std::ostream operator<<( std::ostream & os, const & ComplexNumList ){

    \\ TODO \\
}

ComplexNum & ComplexNumList::operator[](){

    \\ TODO \\
}

void ComplexNumList::clearList(){

    \\ TODO \\
}
