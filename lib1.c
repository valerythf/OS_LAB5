#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float E(int x) {
    return pow(1 + 1.0 / x, x);
}

float Square(float A, float B) {
	float sq;
	sq = A*B;
    return sq;
}
