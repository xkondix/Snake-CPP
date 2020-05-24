all: main exec clean
main: main.o 
		g++ main.o 
main.o: main.cc 
		g++ -c main.cc

clean: main.o main 
		rm -f main.o
		rm -f a.out 
.PHONY: clean


exec:
		./a.out
