#ifndef _JOGO_
#define _JOGO_	

#include <iostream>
#include <vector>
#include "dado.h"
#include "jogador.h"
using namespace std;

class Jogo{
	private:
		int quant_ativos;
		int quant_desistentes;
		bool over;

		Dado dado1;
		Dado dado2;
		vector <Jogador*> jogadores;

		int jogar_Dados();
		void verificar_Estado(Jogador *jog);
		void exibir_Jogadores(bool exibir_rodada);
		void run_Partida(int i);
    bool verificar_Ganhador();

	public:

		static int pontuacao_total;

		void add_Jogador(Jogador *jog);
		void run();

		Jogo();
		~Jogo();

};

#endif