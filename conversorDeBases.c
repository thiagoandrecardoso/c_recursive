#include<stdio.h>
#include<stdlib.h>
/**
** Thiago André Cardoso Silva
** Aulas particulares de programação (para iniciantes)
** Instagram: @programador_who
** Cel: (085) 999273805
*/
void conversorBaseDecimalParaHexBiOctal(int, int);
int main(int argc, char const *argv[]) {
  unsigned int n = 255;
  unsigned int base = 16;
  if (base == 2 || base == 8 || base == 16) {
    conversorBaseDecimalParaHexBiOctal(n, base);
  }
  return 0;
}
void conversorBaseDecimalParaHexBiOctal(int num, int base){
  int resto;
  if (num <= 0){
    return;
  }else{
    resto = num % base;
    conversorBaseDecimalParaHexBiOctal(num/base, base);
    if(base == 16 && resto >= 10){
      printf("%c", resto + 55);
    }
    else{
      printf("%d", resto);
    }
  }
}
