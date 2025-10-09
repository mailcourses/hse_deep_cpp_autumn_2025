
CC=g++
FLAGS=-std=c++20 -Werror -Wall -Wextra

tests: utils.o tests.cpp
	$(CC) $(FLAGS) utils.o tests.cpp -o tests -lgtest -lgtest_main -lpthread

test:
	./tests

utils.o: utils.hpp utils.cpp
	$(CC) $(FLAGS) -c utils.cpp

clean:
	rm -r -f tests *.o
