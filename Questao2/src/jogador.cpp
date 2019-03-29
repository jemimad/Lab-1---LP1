#include <iostream>
#include "jogador.h"

Jogador::Jogador(string nome):nome_jogador(nome), soma_pontos_jogador(0), estado_jogador(true){
}

Jogador::~Jogador(){
}


ostream& operator<< (ostream& o, const Jogador *jog){
  o << "Nome do jogador: " << jog->nome_jogador << "\n"
  << "Pontos: " << jog->soma_pontos_jogador << "\n\n";
  return o;
}

string Jogador::getNome(){
	return nome_jogador;
}

int Jogador::getPontos_jogador(){
	return soma_pontos_jogador;
}

bool Jogador::getEstado_jogador(){
	return estado_jogador;
}

void Jogador::setPontos_jogador(int pontos){
	soma_pontos_jogador += pontos;
}

void Jogador::setEstado_jogador(bool estado){
	estado_jogador = estado;
}
			