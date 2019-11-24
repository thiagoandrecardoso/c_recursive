#include<stdio.h>
#include<stdlib.h>
/**
** Thiago André Cardoso Silva
** Aulas particulares de programação (para iniciantes)
** Instagram: @programador_who
** Cel: (085) 999273805
*/
double somatorioRecursivoEsquerdaDireita();
double somatorioRecursivoDireitaEsquerda();

int main(int argc, char const *argv[]) {
  double n;
  double i = 1;
  printf("%f\n", somatorioRecursivoDireitaEsquerda(2.0));
  return 0;
}
/**
** somatorio de 1 até n de 1/n
*/
// da esquerda para a direita
double somatorioRecursivoEsquerdaDireita(double i, double n){
  if(i >= n){
    return 1/i;
  }else{
    return 1/i + (somatorioRecursivoEsquerdaDireita(i + 1, n));
  }
}

// da direita para esquerda
double somatorioRecursivoDireitaEsquerda(double n){
  if(n == 1){
    return 1;
  }else{
    return 1/n + (somatorioRecursivoDireitaEsquerda(n - 1));
  }
}
