#include <iostream>
#include "jogo.h"
#include "jogador.h"


int Jogo::pontuacao_total = 20;

Jogo::Jogo():quant_ativos(0),over(false){
}

Jogo::~Jogo(){
}


void Jogo::add_Jogador(Jogador *jog){
	jogadores.push_back(jog);
	quant_ativos += 1;
}

int Jogo::jogar_Dados(){
	return dado1.getValor() + dado2.getValor();
}

void Jogo::verificar_Estado(Jogador *jog){
	if(jog->getPontos_jogador() > pontuacao_total){
		jog->setEstado_jogador(false);
		quant_ativos -= 1;
	} else if (jog->getPontos_jogador() == pontuacao_total) {
		over = true;
		cout << "------------------------------------------------------------" << endl;
		cout << "-------------------- JOGO ENCERRADO ---------------------" << endl;
		cout << "----- O ganhador do jogo foi " << jog->getNome() << "-----" << endl;
		cout << "------------------------------------------------------------" << endl;		
	}
}

void Jogo::exibir_Jogadores(){
	int indice_campeao = 0;
	int max_pont_atual = 0;
	
	for(int i = 0; i<int(jogadores.size()); i++){
		cout << jogadores[i];

		if(jogadores[i]->getPontos_jogador() < pontuacao_total && jogadores[i]->getPontos_jogador() > max_pont_atual){
			max_pont_atual = jogadores[i]->getPontos_jogador();
			indice_campeao = i;
		}
	}

	cout << "------------------------------------------------------------" << endl;
	cout << "O ganhador dessa rodada foi " << jogadores[indice_campeao]->getNome() << "." << endl;
	cout << "------------------------------------------------------------" << endl;
}


void Jogo::run_Partida(int i){
	cout << "------------------------------------------------------------" << endl;
	cout << "--------------------------- RODADA " << i << " ----------------------" << endl;
	cout << "------------------------------------------------------------" << endl;
	int opc;
	cout << "Para a tomada de decisões, considere 1 como SIM e 0 como NÃO" << endl;
	for(int i = 0; i<int(jogadores.size()); i++){

		if(jogadores[i]->getEstado_jogador() == true){
			cout << "É a vez do jogador " << jogadores[i]->getNome()
			<<  ", ele deseja jogar?" << endl;
			cin >> opc;

			if(opc == 1){
				jogadores[i]->setPontos_jogador(jogar_Dados());
				verificar_Estado(jogadores[i]);
			} else {
				quant_desistentes += 1;

				cout << "Ok, te esperamos na próxima rodada." << endl;
				if(quant_desistentes == int(jogadores.size())){
					over = true;
					cout << "------------------------------------------------------------" << endl;
					cout << "-------------------- PARTIDA ENCERRADA ---------------------" << endl;
					cout << "------------------------------------------------------------" << endl;
				}
			}
		}	
	}	

}

void Jogo::run(){
	int i = 1;
	while(quant_ativos > 1 && over == false){
		run_Partida(i);
		exibir_Jogadores();
		i++;
	}
}