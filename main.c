#include <stdio.h>

int main(void) {
  char nomeFuncionario[30];
  float salarioAtual;
  printf("O Nome do funcionario e:\n");
  scanf("%s", nomeFuncionario);
  printf("O salario atual e: \n");
  scanf("%f",&salarioAtual);
  printf("O nome do funcionario e: %s, e o seu salario e:%f", nomeFuncionario, salarioAtual);
  return 0;
}