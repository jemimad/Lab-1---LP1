#ifndef _CONTROLE_
#define _CONTROLE_

#include <iostream>
#include <vector>
#include "empresa.h"
#include "funcionario.h"

using namespace std;

class Controlador{
  private:
    vector <Empresa *> empresas; 
  public:

  void add_Empresa(Empresa *emp);
  void exibir_Media();
  Empresa* getEmpresa(string cnpj);
  Controlador();
  ~Controlador();
};


#endif