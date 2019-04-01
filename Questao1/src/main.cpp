#include <iostream>
#include "controlador.h"
#include "empresa.h"
#include "funcionario.h"
#include "date.h"

/*Carmem Stefanie da Silva Cavalcante
  Jemima Dias Nascimento*/

using namespace std;

int main() {
  Controlador controll;
  controll.add_Empresa(new Empresa("UFRN", "11122-33"));
  controll.add_Empresa(new Empresa("IFRN", "22122-33"));

  controll.getEmpresa("22122-33")->add_Funcionario(new Funcionario("Jemima", 100, new date(28,3,2019)));
  controll.getEmpresa("22122-33")->add_Funcionario(new Funcionario("Jemima", 12010, new date(27,3,2019)));
  controll.getEmpresa("22122-33")->add_Funcionario(new Funcionario("Carmem", 150, new date(27,3,2019)));
  controll.getEmpresa("22122-33")->aumentar_Salarios(10);

  controll.getEmpresa("11122-33")->add_Funcionario(new Funcionario("Carmem", 200, new date(27,3,2019)));
  controll.getEmpresa("11122-33")->add_Funcionario(new Funcionario("Maria", 200, new date(27,3,2019)));
  controll.getEmpresa("11122-33")->add_Funcionario(new Funcionario("Joana", 200, new date(27,3,2019)));
  controll.getEmpresa("11122-33")->add_Funcionario(new Funcionario("Rita", 200, new date(27,3,2019)));

  controll.exibir_Media();
  controll.getEmpresa("22122-33")->listar_Funcionarios();


}