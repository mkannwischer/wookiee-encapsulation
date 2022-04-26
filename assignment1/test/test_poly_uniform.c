#include <stdio.h>
#include "../params.h"
#include "../poly.h"
#include "../randombytes.h"

void printrings(void)
{
  printf("Zq = Integers(%d)\n", WOOKIEE_Q);
  printf("Zqx.<x> = PolynomialRing(Zq)\n");
  printf("Rq = Zqx.quotient(x^1024+1)\n");
}

void printsage(const poly *a)
{
  int i;
  printf("Rq(");
  for(i=0;i<WOOKIEE_N-1;i++)
    printf("%d*x^%d +",a->coeffs[i],i);
  printf("%d*x^%d)",a->coeffs[i],i);
}

int main(void)
{
  poly a,b;
  unsigned char seed[WOOKIEE_SYMBYTES];
  int i;
  uint16_t z=(WOOKIEE_Q-1),o=0;

  randombytes(seed, WOOKIEE_SYMBYTES);
  poly_uniform(&a,seed);
  poly_uniform(&b,seed);

  for(i=0;i<WOOKIEE_N;i++)
  {
    z &= a.coeffs[i];
    o |= a.coeffs[i];
    if(a.coeffs[i] != b.coeffs[i])
    {
      printf("False\n");
      return 0;
    }
  }

  if(z == 0 && ((o & (WOOKIEE_Q-1)) == WOOKIEE_Q-1))
    printf("True\n");
  else
    printf("False\n");

  return 0;
}
