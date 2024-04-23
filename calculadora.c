#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
 int opecacao;
 do{

 
  int valorA, valorB, operacao, resultado;

  printf("informe o valor 1:\n");
  scanf("%d", &valorA);
  printf("informe o valor 2:\n");
  scanf("%d", &valorB);
  printf("Qual operacao voce deseja realizar?(soma, subtracao, divisao, multiplicacao):\n");
  printf("selecione 1 para soma.\n");
  printf("selecione 2 para subtracao\n");
  printf("selecione 3 para multiplicacao\n");
  printf("selecione 4 para divisao\n");
  scanf("%d", &operacao);

  switch (operacao)
  {
  case 1:
    resultado = valorA + valorB;
    printf("valor total :%d\n", resultado);
    break;
  case 2:
    resultado = valorA - valorB;
    printf("valor total :%d\n", resultado);
    break;
  case 3:
    resultado = valorA * valorB;
    printf("valor total :%d\n", resultado);
    break;
  case 4:
    resultado = valorA / valorB;
    printf("valor total :%d\n", resultado);
    break;
  default:
    printf("valor invalido!\n");
  }
  printf("digite 1 paara continuar e 0 para sair: \n");
  scanf("%d", &operacao);
 } while (opecacao==1);
  return 0;
}