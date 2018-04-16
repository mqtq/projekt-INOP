#pragma once
//Mateusz Wasiak
//data powstania: 20180416
//Opis: Klasa obs³uguj¹ca jeden dzieñ lotów
//
//
//Modyfikacje pliku:
//
//
#include <vector>

#include "_Fix_.h"
#include "_Samolot_.h"

using namespace std;
class _Teren_
{
private:
	vector <_Samolot_> loty_z_danego_dnia;
	double x;
	double y;
	double r;
	int dzien;
	int najmniejszaIloscWDanymDniu;
public:
	void dodajLot(_Samolot_);//dodaje pojedyñczy lot
	void wczytaj_plik(string nazwaPliku);//wczytuje plik
	void ustaw_obszar(string nazwaPliku);//ustawia obszar z pliku
	void liczIloscSamolotowNadObszarem();//liczy ilosc samolotów przelatuj¹cych nad obszarem
	void ustawObszar(double _x, double _y, double _r);//ustawia obszar wed³óg podanych wspó³rzêdnych
	_Teren_();
	~_Teren_();
};

