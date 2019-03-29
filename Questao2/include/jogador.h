#ifndef _JOGADOR_
#define _JOGADOR_

#include <iostream>
#include <string>
using namespace std;


class Jogador{
	private:
		string nome_jogador;
		int soma_pontos_jogador;
		bool estado_jogador;

	public:

		void setPontos_jogador(int pontos);
		void setEstado_jogador(bool estado);
		
		string getNome();
		int getPontos_jogador();
		bool getEstado_jogador();

		Jogador(string nome);
		~Jogador();


		friend ostream& operator<< (ostream& o, const Jogador *jog);

};



#endif