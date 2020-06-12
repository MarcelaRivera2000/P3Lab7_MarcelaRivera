#include "Chaturanga.h"

using namespace std; 
using std::cin;
using std::endl;
using std::cout;

Chaturanga::Chaturanga(){

}

void Chaturanga::Juego(){
	Pieza*** tablero;
	tablero = new Pieza**[8];
	for(int i=0; i<8;i++){
		tablero[i]=new Pieza*[8];
		for(int j=0; j<8;j++){
			tablero[i][j]=NULL;
		}
	}	
	//Blanco
	tablero[6][1] = new Infanteria("blanco",6,1,tablero,'L');
	tablero[6][2] = new Infanteria("blanco",6,2,tablero,'L');
	tablero[6][3] = new Infanteria("blanco",6,3,tablero,'L');
	tablero[6][4] = new Infanteria("blanco",6,4,tablero,'L');
	tablero[6][5] = new Infanteria("blanco",6,5,tablero,'L');
	tablero[6][6] = new Infanteria("blanco",6,6,tablero,'L');
	tablero[6][7] = new Infanteria("blanco",6,7,tablero,'L');
	tablero[6][0] = new Infanteria("blanco",6,0,tablero,'L');
	tablero[7][0] = new Torre("blanco",7,0,tablero,'Y');	
	tablero[7][7] = new Torre("blanco",7,7,tablero,'Y');
	tablero[7][1] = new Caballos("blanco",7,7,tablero,'O');
	tablero[7][6] = new Caballos("blanco",7,6,tablero,'O');
	tablero[7][2] = new Elefantes("blanco",7,2,tablero,'3');
	tablero[7][5] = new Elefantes("blanco",7,5,tablero,'3');
	tablero[7][3] = new Ministro("blanco",7,3,tablero,'W');
	tablero[7][4] = new Rey("blanco",7,3,tablero,'P');
	//negro	
	tablero[1][1] = new Infanteria("negro",1,1,tablero,'I');
	tablero[1][2] = new Infanteria("negro",1,2,tablero,'I');
	tablero[1][3] = new Infanteria("negro",1,3,tablero,'I');
	tablero[1][4] = new Infanteria("negro",1,4,tablero,'I');
	tablero[1][5] = new Infanteria("negro",1,5,tablero,'I');
	tablero[1][6] = new Infanteria("negro",1,6,tablero,'I');
	tablero[1][7] = new Infanteria("negro",1,7,tablero,'I');
	tablero[1][0] = new Infanteria("negro",1,0,tablero,'I');
	tablero[0][0] = new Torre("negro",0,0,tablero,'T');	
	tablero[0][7] = new Torre("negro",0,7,tablero,'T');
	tablero[0][1] = new Caballos("negro",0,7,tablero,'C');
	tablero[0][6] = new Caballos("negro",0,6,tablero,'C');
	tablero[0][2] = new Elefantes("negro",0,2,tablero,'E');
	tablero[0][5] = new Elefantes("negro",0,5,tablero,'E');
	tablero[0][3] = new Ministro("negro",0,3,tablero,'M');
	tablero[0][4] = new Rey("negro",0,3,tablero,'R');
	
	imprimir(tablero);
	
	while(true){
		string cord1;
		cout<<"(Piezas blancas) Ingrese las coordenadas Jugador 1 "<<endl<<":";
		cin>>cord1;
		tokenss(cord1);
		//cout<<"posi1: "<<x_esta<<y_esta<<endl<<"posi2: "<<x_quiere<<y_quiere<<endl;
		
		
		
	}
	
	
}


void Chaturanga::imprimir(Pieza*** tablero){
	cout<<"    A  B  C  D  E  F  G  H"<<endl<<endl;
	for(int i=0; i<8;i++){
		cout<<i<<"  ";
		for(int j=0; j<8;j++){
			if(tablero[i][j]==NULL){
				cout<<" . ";
			}else{
			cout<<" "<<tablero[i][j]->getChar()<<" ";	
			}
			
			
		}	
		cout<<endl;
	}
}

void Chaturanga:: tokenss(string cords){
	int cont=0;
	cout<<cords.length()<<endl;
	if(cords.length()!=5){
	cont++;
	}else{
		int x=(int)cords[0];
		int y=(int)cords[3];
		if((x>=65&&x<=72)||(y>=65&&y<=72)){
			x_esta=x-65;
			x_quiere=y-65;
			
			int x2=(int)cords[1];
			int y2=(int)cords[4];
			if((x2>=48&&x2<=55)||(y2>=48&&y2<=55)){
			y_esta=x2-48;
			y_quiere=y2-48;
			}else{
				cont++;
			}
		}else{
			cont++;
		}
	}
	
	if(cont!=0){
	string c;
	cout<<"ERROR:Ingrese las coordenadas denuevo"<<endl<<":";
	cin	>>c;
	tokenss(c);
	}
	
}






















