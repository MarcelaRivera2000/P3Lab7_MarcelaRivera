#include "Rey.h"
#include <string>

Rey:: Rey(string color,int x,int y, Pieza*** tablero,char simbolo) : Pieza( color, x, y,  tablero, simbolo){
	
}

bool Rey:: valid(int f,int c){
	if((f-1 == x && c == y)||(f+1 == x && c == y)||(f == x && c+1 == y)||
	(f == x && c-1 == y)||(f+1 == x && c+1 == y)||(f-1 == x && c-1 == y)||(f+1 == x && c-1 == y)||(f-1 == x && c+1 == y)){
		if(tablero[f][c]->getColor()!=tablero[x][y]->getColor() ){
			return true;
		}
	}else{
		return false;
	}	
}
