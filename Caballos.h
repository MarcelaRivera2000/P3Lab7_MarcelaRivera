#ifndef CABALLOS_H
#define CABALLOS_H
#include "Pieza.h"

class Caballos : public Pieza{
	public:
		Caballos(string,int,int,Pieza***,char);
		bool valid(int,int);
	protected:
		string color;
		Pieza*** tablero;
		int x,y;
		char simbolo;
		
};


#endif
