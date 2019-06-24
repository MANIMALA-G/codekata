#include <stdio.h>

int main(void) {
  int b,e,r=1;
  scanf("%d",&b);
  scanf("%d",&e);
  while(e!=0)
  {
      r*=b;
      --e;
  }
  printf("%d",r);
  return 0;
}
