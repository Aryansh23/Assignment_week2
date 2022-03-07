#include <stdio.h>
int main()
{ 
  int n,a,b,c,d,e;
  printf("Enter the number:",n);
  scanf("%d",&n);

 
    a=n%10;
    n=n/10;
    if(c>=10)
   { b=10;
     c=n/b;
     b=b*10;
     }
    d=n%b;
    n=n/b;
    e=n%10;
    printf("%d%d%d",a,d,e);
  return 0;
}