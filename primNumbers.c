#include <stdio.h>
#include <math.h>

int main()
{
  int number, i;
  for(number=1; number<=50; number++) {
    for(i=number-1; i>0; i--) {
      if(number%i == 0 && number != 2) {
        break;
      }
      else if(((number%i != 0) && (i == 2)) || (number == 2)) {
        printf("%d is prime\n", number);
      }
      else {
        continue;
      }
    }
  }
  return 0;
}