// Ten plik wolno modyfikowac, nie wolno jednak korzystac z zadnych
// metod wypisujacych tekst na ekran oprocz tych, ktore sa juz
// zaimplementowane. Mozna zmieniac deklaracje metod, PodajWiek i
// PrzedstawSie, ale nie wolno zmieniac ich implementacji.
#pragma once

#include "Mezczyzna.h"

class Fry : public Mezczyzna
{
public:
	Fry(int value);
	static Fry* Utworz(int value);
	void PrzedstawSie() const;
};
