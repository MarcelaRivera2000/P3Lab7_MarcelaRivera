#ifndef PIEZA_H
#define PIEZA_H
#include <string>


using namespace std; 

class Pieza{
	public:
		Pieza(string,int,int, Pieza***,char);
		bool movimiento(int,int);
		char getChar();
		string getColor();
		
		
	protected:
		string color;
		Pieza*** tablero;
		int x,y;
		char simbolo;
		
		bool validacionDentro(int,int);
		virtual bool valid(int,int)=0;
		
		
};


#endif

