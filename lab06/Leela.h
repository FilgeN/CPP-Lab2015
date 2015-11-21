// Ten plik wolno modyfikowac, nie wolno jednak korzystac z zadnych
// metod wypisujacych tekst na ekran oprocz tych, ktore sa juz
// zaimplementowane. Mozna zmienic deklaracje metody PrzedstawSie, ale
// nie wolno zmieniac jej implementacji.
#pragma once

#include "Kobieta.h"

class Leela : public Kobieta
{
public:
	Leela(int value);
	void PrzedstawSie() const;
	static Leela* Utworz(int value);
};

