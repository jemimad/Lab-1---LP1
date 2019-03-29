#ifndef _EMPRESA_
#define _EMPRESA_

#include <iostream>
#include <string>
#include <vector>
#include "funcionario.h"
#include "date.h"

using namespace std;

class Empresa{
  private:
    string nome_empresa;
    string cnpj_empresa;
    vector <Funcionario*> funcionarios; 

    bool existe_Funcionario(Funcionario *func);

  public:

    static int quant_empresas;
    static date hoje;

    string getNome_Empresa();
    string getCNPJ();

    void add_Funcionario(Funcionario *func);
    void listar_Funcionarios();
    void aumentar_Salarios(float aumento);
    void listar_Experiencias();

    Empresa(string nome, string cnpj);
    ~Empresa();


};


#endif