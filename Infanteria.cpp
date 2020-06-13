#include "Infanteria.h"
#include <string>

Infanteria:: Infanteria(string color,int x,int y, Pieza*** tablero,char simbolo) : Pieza( color, x, y,  tablero, simbolo){

	
}

bool Infanteria:: valid(int f,int c){
	if((f+1==x )||((color=="blanco"&& ((f-1==x &&c-1==y)||(f-1==x &&c+1==y)))|| (color=="negro" && ((f+1==x &&c-1==y)||(f+1==x &&c+1==y))))){
		if(tablero[f][c]->getColor()!=tablero[x][y]->getColor() ){
			return true;
		}
	}else{
		return false;
	}
	
	
}





