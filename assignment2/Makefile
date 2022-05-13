CC = /usr/bin/gcc
CFLAGS = -Wall -Wextra -Wpedantic -g -O3

all: test/test_poly_mul

test/test_poly_mul: params.h poly.c poly.h test/test_poly_mul.c test/randombytes.c test/randombytes.h
	$(CC) $(CFLAGS) -o $@ poly.c test/randombytes.c test/test_poly_mul.c

.PHONY: clean

clean:
	-rm test/test_poly_mul

