#pragma once
//Mateusz Wasiak
//data powstania: 20180416
//Opis: Klasa obs³uguj¹ca wspolrzedne punktu. Zapewnia ona przechowywanie wspó³rzêdnych.
//
//
//Modyfikacje pliku:
//
//
class _Fix_
{
private:
	double wspolrzedzna_N;
	double wspolrzedzna_W;
	double wysokosc1;
	double wysokosc2;
	double typ;
	int czas;
public:
	double zwrocWspolrzedzna_N();//zwraca parametr wspolrzedzna_N
	double zwrocWspolrzedzna_W();//zwraca parametr wspolrzedzna_W
	double zwrocWysokosc1();//zwraca parametr wysokosc1
	double zwrocWysokosc2();//zwraca parametr wysokosc2
	double zwrocTyp();//zwraca parametr typ
	double zwrocCzas();//zwraca parametr czas
	void wpiszWspolrzedzna_N(double _Wzpolrzedzna_N);//ustawia parametr wspolrzedzna_N
	void wpiszWspolrzedzna_W(double _Wzpolrzedzna_W);//ustawia parametr wspolrzedzna_W
	void wpiszWysokosc1(double _wysokosc1);//ustawia parametr wysokosc1
	void wpiszWysokosc2(double _wysokosc2);//ustawia parametr wysokosc2
	void wpiszTyp(double _typ);//ustawia parametr typ
	void wpiszCzas(int _czas);//ustawia parametr czas
	void ustawWartosci(double _wzpolrzedzna_N, double _wzpolrzedzna_W, double _wysokosc1, double _wysokosc2, double _typ, int _czas);//Ustawia wszystkie parametry w klasie.
	_Fix_(double _wzpolrzedzna_N, double _wzpolrzedzna_W, double _wysokosc1, double _wysokosc2, double _typ, int _czas);//Konstruktor parametrowy zapewniaj¹cy ustawienie parametrow na odpowiednie wartoœci;
	_Fix_();
	~_Fix_();
};

