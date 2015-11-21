#ifndef Variable_h
#define Variable_h
/**
 * @class Klasa tworza obiekt reprezentujacy zmienna i jej wartosc
 */
class Variable{
public:
	/**
 	 * @brief Konstruktor tworzacy zmienna
     * @param nazwa - nazwa naszej zmiennej
     * @param wartosc - wartosc naszej zmiennej
 	 */
	Variable(const char* nazwa, float& wartosc);

	/**
 	 * @brief Konstruktor kopiujacy tworzacy zmienna
     * @param oryginal - oryginal dla kopi ktora tworze
 	 */
	Variable(const Variable& oryginal);
	/**
 	 * @brief Destruktor czysczacy pamiec po naszej zmiennej
 	 */
	~Variable();

	/**
 	 * @brief Funkcja wyswietlajaca parametry zmiennej
 	 */
	void print();

	/**
 	 * @brief Funkcja dzielaca zmienne - aby uzyskac wartosc fizyczna
     * @param variable - zmienna czasu
     * @return zwraca nowa zmienna w odpowiedniej formie wartoscPodana / wartosCzasu
 	 */
	Variable divide(Variable variable);

	operator float() const{
		return *_wartosc;
	}

private:
	char *_nazwa; //** < przchowuje nazwe zmiennej
	float *_wartosc; //** < przchowuje wartosc zmiennej
	static int licznik; //** < przechowuje licznik dla ustawiania ID obiektow
	int _ID; //** < przchowuje ID zmiennej
};

#endif
