#include "Elefantes.h"
#include <string>

Elefantes:: Elefantes(string color,int x,int y, Pieza*** tablero,char simbolo) : Pieza( color, x, y,  tablero, simbolo){
	
}

bool Elefantes:: valid(int f,int c){
	if((f+2 == x && c+2 == y)||(f-2 == x && c-2 == y)||(f+2 == x && c-2 == y)||(f-2 == x && c+2 == y)){
	if(tablero[f][c]->getColor()!=tablero[x][y]->getColor() ){
			return true;
	}
	}else{
		return false;
	}
}
