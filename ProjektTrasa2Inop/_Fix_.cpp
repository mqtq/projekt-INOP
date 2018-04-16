#include "stdafx.h"
#include "_Fix_.h"


_Fix_::_Fix_(double _wzpolrzedzna_N, double _wzpolrzedzna_W, double _wysokosc1, double _wysokosc2, double _typ)
{
	wpiszTyp(_typ);
	wpiszWysokosc1(_wysokosc1);
	wpiszWysokosc2(_wysokosc2);
	wpiszWzpolrzedzna_N(_wzpolrzedzna_N);
	wpiszWzpolrzedzna_W(_wzpolrzedzna_W);
}

_Fix_::_Fix_()
{
}


_Fix_::~_Fix_()
{
}
