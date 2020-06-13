#include "Ministro.h"
#include <string>

Ministro:: Ministro(string color,int x,int y, Pieza*** tablero,char simbolo) : Pieza( color, x, y,  tablero, simbolo){
	
}

bool Ministro:: valid(int f ,int c){
	if((f+1 == x && c+1 == y)||(f-1 == x && c-1 == y)||(f+1 == x && c-1 == y)||(f-1 == x && c+1 == y)){
		return true;
	}else{
		return false;
	}	
}
