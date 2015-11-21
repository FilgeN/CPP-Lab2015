#MAKEFILE

#FILES = Lab6.cpp Postac.cpp Mezczyzna.cpp Kobieta.cpp Fry.cpp Leela.cpp

Lab6: all Postac.o Mezczyzna.o Kobieta.o Fry.o Leela.o Lab6.o
	g++ *.o -o Lab6 -Wall -g

Lab6.o: Lab6.cpp Lab6.h
	g++ Lab6.cpp -Wall -g -c
Postac.o: Postac.cpp Postac.h
	g++ Postac.cpp -Wall -g -c
Mezczyzna.o: Mezczyzna.cpp Mezczyzna.h
	g++ Mezczyzna.cpp -Wall -g -c
Kobieta.o: Kobieta.cpp Kobieta.h
	g++ Kobieta.cpp -Wall -g -c
Leela.o: Leela.cpp Leela.h
	g++ Leela.cpp -Wall -g -c
Fry.o: Fry.cpp Fry.h
	g++ Fry.cpp -Wall -g -c


all:
	#reset

rm:
	rm *.o

val:
	valgrind ./Lab6

run:
	./Lab6

.PHONY : all