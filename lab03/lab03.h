
#ifndef _LAB_03_H_
#define _LAB_03_H_

class VectorTrans3;

/** 
 * \@class Vector3
 * \@brief Klasa obslugujaca wektor 3 trojwymiarowy - poziomy
 */
class Vector3{
	friend class VectorTrans3; /**<< deklaracja przyjazni z klasa VectorTrans3 */
	static int licznik; /**< zlicza ilosc tworzonych obietkow */

	private:
		float *wektor; /**< wsk na tablice float przechowujaca parametry wektora */
		/**
		 * @brief Kontruktor tworzacy obiekt wektora
		 * @param x 1 wspolrzedna wektora
		 * @param y 2 wspolrzedna wektora
		 * @param z 3 wspolrzedna wektora
		 */
		Vector3(float x, float y, float z);

	public:
		/**
		 * @brief Funkcja statyczna wywolujaca prywatny konstruktor
		 * @param x 1 wspolrzedna wektora
		 * @param y 2 wspolrzedna wektora
		 * @param z 3 wspolrzedna wektora
		 * @return wskaźnik na nowy obiekt
		 */
		static Vector3* Factory(float x, float y, float z);

		float wartoscWektora; /**< dlugosc wektora */
		
		/**
		 * @brief Funkcja licząca iloczyn skalarny dwoch wektorow
		 * @param speedTrans referencja do wektora na ktorym wykonam iloczyn
		 */
		void Times(const VectorTrans3& speedTrans) const;

		/**
		 * @brief Usuwa wektor, zwalnia pamiec
		 */
		~Vector3();
		
};

/** 
 * \@class VectorTrans3
 * \@brief Klasa obslugujaca wektor 3 trojwymiarowy - pionowy
 */
class VectorTrans3{
	friend class Vector3; /**<< deklaracja przyjazni z klasa VectorTrans3 */

	private:
		float **wektorT; /**< Przechowuje parametry wektora */

	public:
		/**
		 * @brief Kontruktor tworzacy obiekt wektora
		 * @param x 1 wspolrzedna wektora
		 * @param y 2 wspolrzedna wektora
		 * @param z 3 wspolrzedna wektora
		 */
		VectorTrans3(float x, float y, float z);

		/**
		 * @brief Funkcja wyliczajaca macierz z 2 wektorow
		 * @param speedTrans referencja do wektora na ktorym wykonam iloczyn
		 */
		void Times(const Vector3& speed) const;

		/**
		 * @brief Usuwa wektor, zwalnia pamiec
		 */
		~VectorTrans3();
};

#endif