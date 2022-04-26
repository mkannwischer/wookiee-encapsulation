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
  unsigned char abytes[WOOKIEE_POLYBYTES];

  randombytes(seed, WOOKIEE_SYMBYTES);
  poly_uniform(&a,seed);
  poly_tobytes(abytes, &a);
  poly_frombytes(&b, abytes);
  printrings();
  printf("print(");
  printsage(&a);
  printf("==");
  printsage(&b);
  printf(")\n");

  /*
  printf("\n");
  int i;
  for(i=0;i<WOOKIEE_N;i++)
    printf("%02x ", abytes[i]);
  printf("\n");
  */

  return 0;
}
