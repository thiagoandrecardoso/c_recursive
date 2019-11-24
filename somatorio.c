#include<stdio.h>
#include<stdlib.h>
#include <math.h>
/**
** Thiago André Cardoso Silva
** Aulas particulares de programação (para iniciantes)
** Instagram: @programador_who
** Cel: (085) 999273805
*/
double somatorio(int n, int i, double x);

int main(int argc, char const *argv[]) {
  int n;
  double x;
  printf("Digite o valor de n: ");
  scanf("%d", &n);
  printf("Digite o valor de x: ");
  scanf("%lf", &x);
  double resultado = somatorio(n, 1, x);
  printf("%lf\n", resultado);
  return 0;
}
/**
** Somatório de i =1 até n de (-1)^i * (1 / i^x)
*/
double somatorio(int n, int i, double x){
  if (i == n) {
    return ( pow(-1,i) * (1/(pow(i,x))) );
  }else{
    int aux = i + 1;
    return somatorio(n, aux, x) + ( pow(-1,i) * 1/(pow(i,x)) );
  }
}
