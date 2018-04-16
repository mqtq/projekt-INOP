#pragma once
//Mateusz Wasiak
//data powstania: 20180416
//Opis: Klasa przechowuj¹ca informacje na temat jednego lotu
//
//
//Modyfikacje pliku:
//
//
#include <vector>

#include "_Fix_.h"

using namespace std;
class _Samolot_
{
private:
	double identyfikator_lotu;
	double unikalny_ID_lotu;
	vector <_Fix_> punkty_przelotu;
public:
	void wpiszIdentyfikator_lotu(double _identyfikator_lotu);//ustawia parametr identyfikator_lotu
	void wpiszUnikalny_ID_lotu(double _nikalny_ID_lotu);//ustawia parametr unikalny_ID_lotu
	void dodajKolejnyPunkt_przelotu(_Fix_);//dodaje kolejny punkt przelotu
	double zwrocIdentyfikator_lotu();//zwraca parametr identyfikator_lotu
	double zwrocUnikalny_ID_lotu();//zwraca parametr unikalny_ID_lotu
	bool czyPrzelatujeNadObszarem(double _x, double _y, double _r, int &czas);//sprawdza, czy samolot przelatuje nad obszarem i zwraca godzinê wejœcia nad obszar

	_Samolot_();
	~_Samolot_();
};

