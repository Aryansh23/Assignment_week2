#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int n,i,j;
  printf("ENTER SIDE LENTH OF SQUARE:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    if(i==1||i==n)
    {
     {
      for(j=1;j<=n;j++)
      printf("* ");
     }
     printf("\n");
    }
    else
    {
      printf("*");
      {
        for(j=1;j<=2*n-3;j++)
        printf(" ");
      }
      printf("*\n");
    }
    
  }
  return 0;
}
