#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int vetor_de_numeros[100];
  int pos = 0;
  int total_de_numeros;
  do
  {
      printf("Digite um numero (Digite -1 para sair)\n");
      scanf("%d", &vetor_de_numeros[pos]);
      pos++;//4
  }while(vetor_de_numeros[pos-1] != -1);
  total_de_numeros = pos-1;
  printf("\nOs numeros que voce digitou foram:\n");
  for(pos=0;pos<total_de_numeros;pos++)
  {
     printf("%d ", vetor_de_numeros[pos]);
  }
  printf("\n");
  system("PAUSE");	
  return 0;
}

// 5 20 6 -1    
