#include <iostream>
#include <random>
#include "dado.h"
#include "jogo.h"
#include "jogador.h"

using namespace std;

int main(){

	Jogo jogo1;
	jogo1.add_Jogador(new Jogador("Matheus"));
	jogo1.add_Jogador(new Jogador("Jemima"));
	/*jogo1.add_Jogador(new Jogador("Carmem"));
	jogo1.add_Jogador(new Jogador("Raphaell"));
	jogo1.add_Jogador(new Jogador("Eduardo"));
	jogo1.add_Jogador(new Jogador("João Luiz"));*/

	jogo1.run();
	return 0;
}

/*
Falta ajeitar as impressões de ganhador em todos os casos. Sair verificando isso direitinho.
*/