#ifndef MINISTRO_H
#define MINISTRO_H
#include "Pieza.h"

class Ministro : public Pieza{
	public:
		Ministro(string,int,int,Pieza***,char);
		bool valid(int,int);
	protected:
		string color;
		Pieza*** tablero;
		int x,y;
		char simbolo;
		
};


#endif
