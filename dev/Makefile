cc = g++

main: main.cpp getMax.o
	$(cc) main.cpp getMax.o -o main

getMax.o: getMax.cpp
	$(cc) -c getMax.cpp

clean:
	rm *.o
