#include <iostream>
#include "dado.h"

Dado::Dado():rd(), gen(rd()), dis(1, 6){
}

Dado::~Dado(){
}

int Dado::getValor(){
	int valor = round(dis(gen));
	return valor;
}