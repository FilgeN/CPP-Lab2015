// Ten plik wolno modyfikowac, nie wolno jednak korzystac z zadnych
// metod wypisujacych tekst na ekran oprocz tych, ktore sa juz
// zaimplementowane. Mozna zmieniac deklaracje metody PrzedstawSie,
// ale nie wolno zmieniac jej implementacji.

#pragma once

#include "Postac.h"

class Mezczyzna : public Postac
{
public:
	Mezczyzna(int value);
	void PrzedstawSie() const;
};
