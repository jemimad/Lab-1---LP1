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


bool Jogo::verificar_Ganhador(){
  for(int i = 0; i < int(jogadores.size()); i++){

    if (jogadores[i]->getPontos_jogador() == pontuacao_total || 
      (quant_ativos == 1 && jogadores[i]->getEstado_jogador() == true)) {
      cout << "------------------------------------------------------------" << endl;
      cout << "---------------------- JOGO ENCERRADO -----------------------" << endl;
      cout << "-------------- O ganhador do jogo foi " << jogadores[i]->getNome() << " --------------" << endl;
      cout << "------------------------------------------------------------" << endl;	

      over = true;
  	}
  }

  if(quant_ativos == 0 || over == true){
    return true;
  }

  return false;
}

void Jogo::verificar_Estado(Jogador *jog){

	if(jog->getPontos_jogador() > pontuacao_total){
		jog->setEstado_jogador(false);
		quant_ativos -= 1;
	} 
}

void Jogo::exibir_Jogadores(bool exibir_rodada){
	int indice_campeao = 0;
	int max_pont_atual = 0;
	
  cout << "------------------------------------------------------------" << endl;
	for(int i = 0; i<int(jogadores.size()); i++){
		cout << jogadores[i];
    if(jogadores[i]->getEstado_jogador() == false){
      cout << "JOGADOR ELIMINADO" << endl << endl;
    } else {
      cout << endl;
    }

		if(jogadores[i]->getPontos_jogador() < pontuacao_total && jogadores[i]->getPontos_jogador() > max_pont_atual){
			max_pont_atual = jogadores[i]->getPontos_jogador();
			indice_campeao = i;
		}  
	}

  over = verificar_Ganhador();

  if(over == false || exibir_rodada == true){
    cout << "------------------------------------------------------------" << endl;
    cout << "O ganhador dessa rodada foi " << jogadores[indice_campeao]->getNome() << "." << endl;
    cout << "------------------------------------------------------------" << endl;
  }
}


void Jogo::run_Partida(int i){
  bool exibir_rodada = false;
  quant_desistentes = 0;

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
			}
    }  
    
    if(quant_desistentes == int(jogadores.size())){
			exibir_rodada = true;
      over = true;
			cout << "------------------------------------------------------------" << endl;
			cout << "-------------------- JOGO ENCERRADO ---------------------" << endl;
			cout << "------------------------------------------------------------" << endl;
		} 
	}

  exibir_Jogadores(exibir_rodada);
}	
	

void Jogo::run(){
	int i = 1;
	while(quant_ativos > 1 && over == false){
		run_Partida(i);
		i++;
	}
}