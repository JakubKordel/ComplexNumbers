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
    for ( int i = 0; i<2 ; ++i ){
        list[0].addElement( num[i] );
    }
    for ( int i = 2; i<4 ; ++i ){
        list[1].addElement( num[i] );
    }
    for ( int i = 3; i<7 ; ++i ){
        list[2].addElement( num[i] );
    }
    for ( int i = 5; i<10 ;  ++i ){
        list[3].addElement( num[i] );
    }

    std::cout << list[0] << std::endl << list[1] << std::endl << list[2] << std::endl << list[3] << std::endl ;
    num[5] = num[4] += num[3] -= num[1] - num[0];
    num[9] = num[5] + num[8];
    std::cout << num[5] << std::endl << num[4] << std::endl << num[3] << std::endl << num[1] << std::endl << num[0] << std::endl;
    std::cout << std::endl << num[9];

    list[1].deleteElement(1);
    std::cout << std::endl << list[1] + list[2] << std::endl << list[1] << std::endl << list[2];

    return 0;
}
