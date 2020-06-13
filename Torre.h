#ifndef TORRE_H
#define TORRE_H
#include "Pieza.h"

class Torre :public Pieza{
	public:
		Torre(string,int,int,Pieza***,char);
		bool valid(int,int);
	protected:
		
};


#endif
