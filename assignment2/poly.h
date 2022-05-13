#ifndef POLY_H
#define POLY_H

#include <stdint.h>
#include "params.h"

/* Element of Rq = Z_q[X]/(X^n+1) */
/* coeffs[0] + X*coeffs[1] + X^2*xoeffs[2] + ... + X^(n-1)*xcoeffs[n-1] */
typedef struct{
  uint16_t coeffs[WOOKIEE_N];
} poly;

/* Multiply polynomial a by polynomial b, write result to r */
void poly_mul(poly *r, const poly *a, const poly *b);


void poly_ntt(int32_t a[WOOKIEE_N]);
void poly_basemul(int32_t r[WOOKIEE_N], int32_t a[WOOKIEE_N], int32_t b[WOOKIEE_N]);
void poly_invntt(int32_t a[WOOKIEE_N]);
#endif
