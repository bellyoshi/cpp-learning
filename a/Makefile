CXX = g++
#CXXFLAGS = -Wall -Wextra -Werror -pedantic -std=c++11 -g 
CXXFLAGS = -Wall -Wextra -pedantic -std=c++2a -g 

run: main
	./main
clean:
	rm -f *.o main

main: main.o a.o b.o
	$(CXX) $(CXXFLAGS) -o main main.o a.o b.o
main.o	: main.cpp a.hpp
	$(CXX) $(CXXFLAGS) -c main.cpp
a.o	: a.cpp a.hpp
	$(CXX) $(CXXFLAGS) -c a.cpp
b.o : b.cpp b.hpp
	$(CXX) $(CXXFLAGS) -c b.cpp
	
