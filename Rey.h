#ifndef REY_H
#define REY_H
#include "Pieza.h"

class Rey : public Pieza{
	public:
		Rey(string,int,int,Pieza***,char);
		bool valid(int,int);
		
	protected:

		
};


#endif
