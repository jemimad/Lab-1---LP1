#include <iostream>
#include "empresa.h"

int Empresa::quant_empresas = 0;
//date Empresa::hoje = new date(30,3,2019);

// Construtor e Destrututor
Empresa::Empresa(string nome, string cnpj){
  nome_empresa = nome;
  cnpj_empresa = cnpj;
  
}

Empresa::~Empresa(){
}



// Gets 
string Empresa::getNome_Empresa(){
  return nome_empresa;
}

string Empresa::getCNPJ(){
  return cnpj_empresa;
}




// Funções Privadas
bool Empresa::existe_Funcionario(Funcionario *func){
	for(int i = 0; i<int(funcionarios.size()); i++){
		if(funcionarios[i]->getNome_Funcionario() == func->getNome_Funcionario()){
			return true;     
		} 
  }
  return false;
}




// Funções públicas
void Empresa::add_Funcionario(Funcionario *func){
  if(int(funcionarios.size()) == 0){
    funcionarios.push_back(func);
		Funcionario::quant_funcionarios += 1;
    

    //cout  << func->getNome_Funcionario() << " foi adicionado corretamente em " << getNome_Empresa() << endl;
  } else {

    bool permissao = existe_Funcionario(func);

    if(permissao == true){
      cout << "Já existe um funcionário com o nome >" << func->getNome_Funcionario() << "< na empresa "<< getNome_Empresa() << endl;
    } else {
      funcionarios.push_back(func);
		  Funcionario::quant_funcionarios += 1;
      

      //cout  << func->getNome_Funcionario() << " foi adicionado corretamente em " << getNome_Empresa() << endl;
      //isso da data não ta funcionando << ", NO DIA" << func->getData_Admissao() 
    }
  }	
}


void Empresa::listar_Funcionarios(){
  for(int i = 0; i<int(funcionarios.size()); i++){
    cout << funcionarios[i];

  }
}


void Empresa::aumentar_Salarios(float aumento){
  for(int i = 0; i<int(funcionarios.size()); i++){
    int salario_atual = funcionarios[i]->getSalario();
    funcionarios[i]->setSalario(salario_atual*(aumento/100+1));

    //cout << "O salário de " << funcionarios[i]->getNome_Funcionario() << " era de " << salario_atual <<
    //" reais e agora é de " << funcionarios[i]->getSalario() << endl << endl;

  }  
}

void Empresa::listar_Experiencias(){
  for(int i = 0; i<int(funcionarios.size()); i++){
    /*if(funcionarios[i]->getData_Admissao() + 90 >= hoje){
      cout << funcionarios[i];
    }*/
  }  
}


