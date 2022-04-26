#ifndef API_H
#define API_H

#include "params.h"

#define CRYPTO_SECRETKEYBYTES  WOOKIEE_POLYBYTES
#define CRYPTO_PUBLICKEYBYTES  (WOOKIEE_POLYBYTES+WOOKIEE_SYMBYTES)
#define CRYPTO_CIPHERTEXTBYTES (2*WOOKIEE_POLYBYTES)
#define CRYPTO_BYTES           WOOKIEE_SYMBYTES

int crypto_kem_keypair(unsigned char *pk, unsigned char *sk);

int crypto_kem_enc(unsigned char *ct, unsigned char *ss, const unsigned char *pk);

int crypto_kem_dec(unsigned char *ss, const unsigned char *ct, const unsigned char *sk);

#endif
