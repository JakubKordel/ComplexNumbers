#include <iostream>
#include "ComplexNum.h"
#include "ComplexNumList.h"

int main() {
    ComplexNum num[10];
    num[0].set ( 3, -4);
    num[1].set ( 5.45, -8.98 );
    num[2].set ( 1000, -100.23);
    num[3].set ( -17.98, 18);
    num[4].set ( 56, -34);
    num[5].set ( 12, 18);
    num[6].set ( 37, -45);
    num[7].set ( 987, 1);
    num[8].set ( 19, 65);
    num[9].set ( -120, 18);
    ComplexNumList list[4];
    for ( int i = 0; i<6 ; ++i ){
        list[0].addElement( num[i] );
    }
    for ( int i = 6; i<10 ; ++i ){
        list[0].addElement( num[i] );
    }
    for ( int i = 2; i<10 ; ++i ){
        list[0].addElement( num[i] );
    }
    for ( int i = 0; i<10 ;  ++i ){
        list[0].addElement( num[i] );
    }
    list[0] = list[1] + list[2];
    std::cout << std::endl  << list[0] << std::endl ;

    return 0;
}
