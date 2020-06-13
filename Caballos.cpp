#include "Caballos.h"
#include <string>

Caballos:: Caballos(string color,int x,int y, Pieza*** tablero,char simbolo) : Pieza( color, x, y,  tablero, simbolo){
	
}

bool Caballos:: valid(int f,int c){
	if((f-2 == x && c+1 == y)||(f-1 == x && c+2 == y)||(f+1 == x && c+2 == y)||(f+2 == x && c+1 == y)||(f+2 == x && c-1 == y)||(f+1 == x && c-2 == y)||(f-2 == x && c-1 == y) ){
		if(tablero[f][c]->getColor()!=tablero[x][y]->getColor() ){
			return true;
		}
	}else{
		
	}
	
	
}

