main: main.o hello.o
	g++ main.o hello.o -o hello -O2 -Wall -Wshadow
	rm -rf *.gch *.o

main.o: main.cpp
	g++ main.cpp -c

hello.o: hello.cpp hello.h
	g++ hello.cpp hello.h -c

