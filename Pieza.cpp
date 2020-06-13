#include "Pieza.h"
#include<iostream>
using namespace std; 
using std::cin;
using std::endl;
using std::cout;

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
	cout<<"x: "<<x<<" y: "<<y<<" xx: "<<xx<<" yy: "<<yy<<endl;
	if(validacionDentro(xx,yy)){
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
		}else{
			cout<<"Movimiento no valido"<<endl;
		}
	}
	return false;
}

bool Pieza::validacionDentro(int x,int y){
	if((x>=0 && x<8)&&(y>=0 && y<8)){
		return true;
	}
	return false;
}





