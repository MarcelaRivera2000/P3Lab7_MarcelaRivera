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

bool Pieza::movimiento(int xx,int yy){
	if(valid(xx,yy)){
		if(Pieza* p = tablero[xx][yy]){
			delete p;
			tablero[xx][yy]=NULL;
		}
		tablero[xx][yy] = tablero [x][y];
		tablero[x][y]= NULL;
		x=xx;
		y=yy;
		return true;
	}
	return false;
}

bool Pieza::validacionDentro(int x,int y){
	
	if((x>=0 && x<=8)&&(y>=0 && y<=8)){
		
	}
}





