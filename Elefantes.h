#ifndef ELEFANTES_H
#define ELEFANTES_H
#include "Pieza.h"

class Elefantes : public Pieza{
	public:
		Elefantes(string,int,int,Pieza***,char);
		bool valid(int,int);
	protected:

};


#endif
