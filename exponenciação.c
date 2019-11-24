#include<stdio.h>
#include<stdlib.h>
/**
** Thiago André Cardoso Silva
** Aulas particulares de programação (para iniciantes)
** Instagram: @programador_who
** Cel: (085) 999273805
*/
int exponenciacaoRecursiva();

int main(int argc, char const *argv[]) {
  int y, x;
  scanf("%d", &x);
  scanf("%d", &y);
  int r = exponenciacaoRecursiva(x, y);
  printf("%d\n", r);
  return 0;
}

int exponenciacaoRecursiva(int x, int y){
  if(y == 1){
    return x;
  }else{
    return x * exponenciacaoRecursiva(x, y-1);
  }
}
