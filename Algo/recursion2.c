#include<stdio.h>
int count7(int n){
  int a=0;
  if(n>0)
  {
      if(n%10==7)
      {
        return 1+count7(n/10);
      }
      else
      {
        return 0+count7(n/10);
      }
  }
  else
  return 0;
}
int main()
{
    int a=count7(888);
    printf("%d",a);
}
