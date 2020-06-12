#ifndef CHATURANGA_H
#define CHATURANGA_H
#include "Pieza.h"
#include<iostream>
#include "Infanteria.h"
#include "Torre.h"
#include "Caballos.h"
#include "Elefantes.h"
#include "Ministro.h"
#include "Rey.h"
#include <string>

class Chaturanga{
	public:
		Chaturanga();
		void Juego();
		void imprimir(Pieza***);
		void tokenss(string);
	protected:
		int x_esta,y_esta,x_quiere,y_quiere;
	
	
};

#endif


