#include "Pieza.h"

Pieza ::Pieza(string c,int i,int j, Pieza*** table,char s){
	color = c;
	x=i;
	y=j;
	tablero=table;
	simbolo=s;
}

string Pieza::getColor(){
	return color;
}

char Pieza::getChar(){
	return simbolo;
} 

bool Pieza::movimiento(int x,int y){
	
}





