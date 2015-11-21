# Makefile dla Programowanie Obiektowe 1
# Filip Kania
# Kompilacja w gcc version 4.8.4 (Ubuntu 4.8.4-2ubuntu1~14.04) 

FLAGS = -Wall -g
#RM = rm -f

PROG = lab03
FILE = lab03.cpp Vectors.cpp

all: $(FILE)
	g++ $(FLAGS) -o $(PROG) $(FILE)
	valgrind ./lab03 -v
	#./program