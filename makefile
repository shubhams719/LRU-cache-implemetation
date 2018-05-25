a.out : main.o LRU.o
	g++ -g -o a.out main.o LRU.o
LRU.o : LRU.cpp LRU.h
	g++ -std=c++11 -g -c LRU.cpp
main.o : main.cpp LRU.h
	g++ -std=c++11 -g -c main.cpp
clean : 
	rm -rf main.o LRU.o LRU a.out
