#include <stdio.h>

int main()
{
    int n;
   printf("Enter the number");
   scanf("%d",&n);
   if(n%2==0)
   printf("Even");
   else if(n%2!=0)
   printf("Odd");
   else
   printf("Invalid");
}
