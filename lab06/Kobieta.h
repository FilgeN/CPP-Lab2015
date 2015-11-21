// Ten plik wolno modyfikowac, nie wolno jednak korzystac z zadnych
// metod wypisujacych tekst na ekran oprocz tych, ktore sa juz
// zaimplementowane. Mozna zmieniac deklaracje metod, PodajWiek i
// PrzedstawSie, ale nie wolno zmieniac ich implementacji.

#pragma once

#include "Postac.h"

class Kobieta : public Postac
{
public:
	Kobieta(int value);
	void PrzedstawSie() const;
};
