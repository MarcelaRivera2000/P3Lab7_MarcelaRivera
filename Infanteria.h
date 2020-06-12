#ifndef INFANTERIA_H
#define INFANTERIA_H
#include "Pieza.h"

class Infanteria : public Pieza{
	public:
		Infanteria(string,int,int,Pieza***,char);
		bool valid(int,int);
		
	protected:
		/*string color;
		Pieza*** tablero;
		int x,y;
		char simbolo;*/
		
};


#endif
