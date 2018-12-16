#include <stdio.h>

int main()
{
  double M[12][12];
  int L;
  char op[5];
  in j, i;
  double soma = 0.0;
  
  scanf("%d", &L);
  scanf("%s", &op);
  
  for(i = 0; i < 12; i++)
  {
    for(j = 0; j < 12; j++)
    {
      scanf("%lf", &M[i][j]);
    }
  }
  
  for(j = 0; j < 12; j++)
  {
    soma += M[L][j];
  }
  
  if(op[0] == 'M')
  {
    soma = soma / 12.0;
  }
  
  printf("%.1lf\n", soma);
}
