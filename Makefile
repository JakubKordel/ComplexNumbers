release: ComplexNum
	./ComplexNum
	
ComplexNum: main.o  ComplexNum.o ComplexNumList.o
	g++ main.o ComplexNum.o ComplexNumList.o -o ComplexNum

main.o: main.cpp ComplexNum.h ComplexNumList.h
	g++ -c -Wall -pedantic main.cpp

ComplexNum.o: ComplexNum.cpp ComplexNum.h
	g++ -c -Wall -pedantic ComplexNum.cpp

ComplexNumList.o: ComplexNumList.h ComplexNumList.cpp
	g++ -c -Wall -pedantic ComplexNumList.cpp

clear:
	rm -rf *o ComplexNum
	rm -rf *o ComplexNumDebug

debug: ComplexNumDebug
	gdb ComplexNumDebug

ComplexNumDebug: main.cpp ComplexNum.cpp ComplexNum.h ComplexNumList.h ComplexNumList.cpp
	g++ -g main.cpp ComplexNum.cpp ComplexNum.h ComplexNumList.cpp ComplexNumList.h -o ComplexNumDebug
	

