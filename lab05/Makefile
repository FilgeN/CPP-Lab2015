# Makefile dla Programowanie Obiektowe 1
# Filip Kania

FLAGS = -Wall -g
#RM = rm -f

PROG = Lab05
FILE = lab05.cpp string.cpp

all: $(FILE)
	g++ $(FLAGS) -o $(PROG) $(FILE)
	
val:
	valgrind ./Lab05 -v
run:
	./Lab05