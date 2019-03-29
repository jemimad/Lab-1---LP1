#include <iostream>
#include "controlador.h"

// Construtor e Destrutor
Controlador::Controlador(){
}

Controlador::~Controlador(){
}

// Métodos públicos
void Controlador::add_Empresa(Empresa *emp){
  empresas.push_back(emp);
  Empresa::quant_empresas+=1;
}

void Controlador::exibir_Media(){
  float media = Funcionario::quant_funcionarios/Empresa::quant_empresas;
  cout << "A média de funcionários por empresa é de: " << media << endl;
}

Empresa* Controlador::getEmpresa(string cnpj){
	int tamanho = empresas.size();
	for(int i = 0; i<tamanho; i++){
		if(empresas[i]->getCNPJ() == cnpj){
			return empresas[i];
		}
	}
	return nullptr;
}