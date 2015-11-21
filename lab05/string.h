#ifndef STRING_H
#define STRING_H

#include <iostream>


/**
  * @class Klasa reprezentujaca string (ciag znakow)
  *
  * Umozliwiajaca operacje na ciagach znakow, takie jak:
  * drukowanie, dodawanie, wyswietlanie od tylu
  **/
class string
{

public:
	/**
  	 * @brief Konstruktor tworzacy obiekt za pomoca podanego ciagu znakow
  	 * @param oryginal - ciag znakow ktory ma reprezentowac nasz obiekt
  	 **/
	string(const char *oryginal);

	/**
  	 * @brief Destruktor zwalniajacy pomiec po tablicy charow
  	 **/
	~string();

	/**
  	 * @brief Funckja drukujaca ilosc znakow w naszym stringu
  	 **/
	void print_n_chars();

	/**
  	 * @brief Przeladownei operatora '<<' tak aby dodawal do 
  	 *        istniejacego ciagu nowy ciag  
  	 * @param  add - nowy ciag do dodania
  	 **/
	string& operator<<(const char *add);

	/**
  	 * @brief Przeladownei operatora '<<' tak aby dodawal do 
  	 *        istniejacego ciagu nowa litere 
  	 * @param  add - nowy litera do dodania
  	 **/
	void operator<<(const char addOne);

	/**
  	 * @brief Przeladownei operatora '()' tak aby wyswietlal 
  	 *        z naszego stringa litery z podanego przedzialu
  	 * @param  start - paczatek wyswietlania
  	 * @param  stop  - koniec wyswietlania
  	 * @return obiekt do wyswietlenia
  	 **/
	string operator()(const int start,const int stop);

	/**
  	 * @brief Przeladownei operatora '<<' (std::cout)
  	 * 		  tak by std::cout mogl wypisywac nasz obiekt
  	 * @param wyjscie - wskaznik danych na wyjscie
  	 * @param str - referencja obiektu do wyswietlenia
  	 **/
	friend std::ostream& operator<<(std::ostream& wyjscie,const string &str);
private:
	char* _chars; /** zmienna przechowujaca ciag znakow **/
	int _size; /** zmienna przechowujaca rozmiar tablicy znakow _chars **/

	
};

#endif