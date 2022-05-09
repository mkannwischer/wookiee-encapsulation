# Wookiee encapsulation

This assignment accompanies my lectures on lattice-based cryptography
first taught at RheinMain University of Applied Sciences, Wiesbaden in
Spring 2022.

Assignment 1 is https://cryptojedi.org/wookie.tar.gz by Peter Schwabe.
Assignment 2 builds upon it.

# Assignment 1: Implementing Wookiee

In the first week's assignment you will be implementing Wookiee -- a very
simple instantiation of the LPR crypto system; see my slides available at https://kannnwischer.eu/talks/20220511-latticekems.pdf.
In particular, you want to revisit slide 14 defining the LPR cryptosystem
and the slides following slide 61 giving hints on this assignment.

Your goal is to make all tests pass (`./test/test.sh`).

# Assignment 2: Implementing Wookiee using NTTs

The operation vastly dominating the performance of Wookiee (just as for any
other scheme based on structured lattices) is polynomial multiplication.
In your initial implementation of Wookiee you have probably used schoolbook
multiplication. In this assignment, you will be implementing it using
Number-theoretic transforms.

Your goal is to replace `poly_mul` in `poly.c` with an NTT-based implementation
and make the tests pass (`./test/test.sh`).
Revisit slide XXX from XXX describing the Cooley--Tukey and Gentleman--Sande algorithms for
implementing the NTT.
Read the hints in slide XXX and following.
