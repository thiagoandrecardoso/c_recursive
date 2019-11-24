#include<stdio.h>
#include<stdlib.h>
/**
** Thiago André Cardoso Silva
** Aulas particulares de programação (para iniciantes)
** Instagram: @programador_who
** Cel: (085) 999273805
*/
void fibonacci_sequencia(int quantidade); // Não recursivo.
int fibonacci_n_esimo_elemento(int n);

int main(int argc, char const *argv[]) {
  int n = 7;
  printf("O %d numero da sequencia de fibonacci = %d\n\n", n, fibonacci_n_esimo_elemento(n));
  fibonacci_sequencia(9);
  return 0;
}

int fibonacci_n_esimo_elemento(int n){
  if(n == 1 || n == 2){
    return 1;
  }else{
    return fibonacci_n_esimo_elemento(n - 1) + fibonacci_n_esimo_elemento(n - 2);
  }
}

void fibonacci_sequencia(int quantidade){
  int n1 = 1, n2 = 1;
  for (size_t i = 0; i < quantidade; i++) {
    printf("%d ", n1);
    n2 += n1;
    n1 = n2 - n1;
   }
}
