#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char string_um[30], string_dois[30] ="Beto";
  int pos;
  for(pos=0;string_dois[pos];pos++)
  {
       string_um[pos] = string_dois[pos];
       //printf("\n%d\n",pos);
  }
  printf("\n%d\n",pos);
  string_um[pos] = '\0';
  printf("String um %s\n",string_um);
    printf("String dois %s\n",string_dois);
  printf("\n");
  system("PAUSE");	
  return 0;
}
