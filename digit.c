#include <stdio.h>

int main(void) {
  int n,d=0,c;
  scanf("%d",&n);
  while(n!=0)
  {
      c++;
      n/=10;
  }
  printf("%d",c);
  return 0;
}
