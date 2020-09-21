#include <stdib.h>
#include <time.h>

int main(void)
{
  int n;
  int LastDigit = n % 10;
 
 srand(time(0));
  n = rand() - RAND_MAX / 2;
  if(LastDigit > 5)
    printf("Last Digit of %i is %i and is greater than 5\n", n, LastDigit);
  else if(LastDigit == 0)
    printf("Last Digit of %i is %i and is 0\n", n, LastDigit);
  else
    printf(
  return(0);
}
