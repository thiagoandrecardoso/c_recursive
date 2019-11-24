#include<stdio.h>
#include<stdlib.h>
/**
** Thiago André Cardoso Silva
** Aulas particulares de programação (para iniciantes)
** Instagram: @programador_who
** Cel: (085) 999273805
*/
int fatorial();

int main(int argc, char const *argv[]) {
  int numero = 5;
  int resposta = fatorial(numero); // CHAMADA DA FUNCAO
  printf("fatorial de %d = %d\n", numero, resposta);
  return 0;
}

//------------DECLARAÇAO DA FUNCAO------------
int fatorial(int numero){
  if (numero == 1 || numero == 0) {
    return 1;
  }else{
    return numero * fatorial(numero -1);
  }
}
