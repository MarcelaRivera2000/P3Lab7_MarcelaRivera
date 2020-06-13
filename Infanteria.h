#ifndef INFANTERIA_H
#define INFANTERIA_H
#include "Pieza.h"

class Infanteria : public Pieza{
	public:
		Infanteria(string,int,int,Pieza***,char);
		bool valid(int,int);
		
	protected:

		
};


#endif
