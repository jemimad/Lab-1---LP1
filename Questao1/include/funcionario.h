#ifndef _FUNCIONARIO_
#define _FUNCIONARIO_

#include <iostream>
#include <string>
#include "date.h"

using namespace std;

class Funcionario{
  private:
    string nome_func;
    float salario_func;
    date *data_adm_func;
    
  public:
    static int quant_funcionarios;

    string getNome_Funcionario();
    float getSalario();
    date getData_Admissao();
    
    void setSalario(float salario);

    Funcionario(string nome, float salario, date *data);
    ~Funcionario();
    
    friend ostream& operator<< (ostream& o, const Funcionario *func);
};


#endif