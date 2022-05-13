#ifndef PARAMS_H
#define PARAMS_H

#define WOOKIEE_N      1024
#define WOOKIEE_LOGQ     12
#define WOOKIEE_Q      (1<<WOOKIEE_LOGQ)
#define WOOKIEE_K         8
#define WOOKIEE_SYMBYTES 32

#define WOOKIEE_POLYBYTES  ((WOOKIEE_N*WOOKIEE_LOGQ)/8)

#endif
