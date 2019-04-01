#include <iostream>
#include <random>
#include "dado.h"
#include "jogo.h"
#include "jogador.h"

/*Carmem Stefanie da Silva Cavalcante
  Jemima Dias Nascimento*/

using namespace std;

int main(){

	Jogo jogo1;
	jogo1.add_Jogador(new Jogador("Matheus"));
	jogo1.add_Jogador(new Jogador("Jemima"));
	jogo1.add_Jogador(new Jogador("Carmem"));
	jogo1.add_Jogador(new Jogador("Raphaell"));

	jogo1.run();
	return 0;
}