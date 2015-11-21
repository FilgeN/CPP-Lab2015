// Ten plik wolno modyfikowac, nie wolno jednak korzystac z zadnych
// metod wypisujacych tekst na ekran oprocz tych, ktore sa juz
// zaimplementowane. Mozna zmieniac deklaracje metod, PodajWiek i
// PrzedstawSie, ale nie wolno zmieniac ich implementacji.

#pragma once

class Postac
{
public:
	Postac();
	Postac(int value);
	virtual ~Postac();
	virtual void PrzedstawSie() const ;
	void PodajWiek() const ;
	static void Posprzataj();

protected:
	int m_wiek;
	static Postac** _tablicaPostaci;
	static int _licznik;
};

typedef void (Postac::*drukFunkcja)(void) const;

void Wypisz(const Postac& p, drukFunkcja fun );
void WypiszDobrze(const Postac& p, drukFunkcja fun);
