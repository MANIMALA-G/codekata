#include <stdio.h>

int main(void) {
  int year;
 
    printf("Enter a year \n");
    scanf("%d", &year);
    if ((year % 400) == 0)
        printf("yes \n", year);
    else if ((year % 100) == 0)
        printf("no \n", year);
    else if ((year % 4) == 0)
        printf("yes \n", year);
    else
        printf("no \n", year);
  return 0;
}
