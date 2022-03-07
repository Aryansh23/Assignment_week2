#include <stdio.h>

int main()
{ int fibonacci(int i);
  int n,i;
  printf("Enter any number:");
  scanf("%d",&n);
  fibonacci (i);
  for(i=0;i<=n;i++)
  printf("%d,",fibonacci(i));
  
  return 0;
}
int fibonacci(int i)
{
  if(i<=1)
  return i;
  else if(i>1)
  return (fibonacci (i-1) + fibonacci(i-2));
}