#include <iostream>
#include "Chaturanga.h"

using namespace std; 
using std::cin;
using std::endl;
using std::cout;

int main(int argc, char** argv) {	
	while (true){
	int op;
	cout<<"--------- LABORATORIO # 7 ---------"<<endl<<"1.Jugar"<<endl<<"2.Salir"<<endl<<":";
	cin>>op;
	switch(op){
		case 1:{
			Chaturanga h;
			h.Juego();
			break;
		}
		case 2:{
			exit (EXIT_FAILURE);
			break;
		}
	} 	
	}
	return 0;
}















