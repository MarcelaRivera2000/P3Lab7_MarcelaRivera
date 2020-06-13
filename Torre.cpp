#include "Torre.h"
#include <string>

Torre:: Torre(string color,int x,int y, Pieza*** tablero,char simbolo) : Pieza( color, x, y,  tablero, simbolo){
	
}

bool Torre:: valid(int f ,int c){
	int cont=0;
	if(f==x || c==y){
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
		
				if(tablero[i][j].getColor()=="blanco"||tablero[i][j].getColor()=="negro"){
					cont++;
				}
		}
	}
		if(cont==0){
			return true;
		}else{
			return false;
		}	
	}else{
		return false;
	}
}


