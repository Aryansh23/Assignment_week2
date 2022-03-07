#include <stdio.h>
int main()
{
  char rev(char s1);
  char s1[100],s2[100],temp;
  printf("enter str1 ");
  gets(s1);
  printf("enter str2 ");
  gets(s2);
  int i,j,len;
  for(i=0;s1[i]!='\0';i++);
  for(j=0;s2[j]!='\0';j++,++i)
  {
  s1[i]=s2[j];}
  s1[i]='\0';
  
  printf("concat str : %s",s1);
  return 0;
}
char rev(char s1)
{
  int i,j,len;
  char s1,temp
  gets(s1);
  len=strlen(s1);

  for(i=0;i<len/2;i++)
  
  temp=s1[i];
  s1[i]=s1[len-1-i];
  s1[len-1-i]=temp;
  printf("the reversed string is %s",s1);
  
}
