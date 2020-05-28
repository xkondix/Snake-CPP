all: snake exec clean
snake: snake.o 
		g++ snake.cpp -o snake -lsfml-graphics -lsfml-window -lsfml-system -lm

snake.o: snake.cpp
		g++ -c snake.cpp
clean: snake.o snake
		rm -f snake.o
		rm -f snake 
.PHONY: clean


exec:
		./snake
