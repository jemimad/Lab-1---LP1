#include <iostream>
#include "funcionario.h"

int Funcionario::quant_funcionarios = 0;

//Construtor e Destrutor
Funcionario::Funcionario(string nome, float salario, date *data){
  nome_func = nome;
  salario_func = salario;
  data_adm_func = data;
}

Funcionario::~Funcionario(){
}


//Sobrecarga de Funções
ostream& operator<< (ostream& o, const Funcionario *func){
  o << "Nome do funcionário: " << func->nome_func << "\n"
  << "Salário: " << func->salario_func << "\n"
  << "Data de Admissao: " << func->data_adm_func << "\n\n";
  return o;
}


// Gets e Sets
string Funcionario::getNome_Funcionario(){
  return nome_func;
}

float Funcionario::getSalario(){
  return salario_func;
}

date Funcionario::getData_Admissao(){
  return *data_adm_func;
}

void Funcionario::setSalario(float salario){
  salario_func = salario;
}


