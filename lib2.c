#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float E(int x) {
    float answer;
    answer = 0;
    int f;
    for (int i = 0; i <= x; ++i) {
        f = 1;
            for (int j = 1; j <= i; j++) {
                f *= j; 
            }
        answer += 1.0 / f;
    }
    return answer;
}

float Square(float A, float B) {
	float sq;
	sq = (A*B)/2;
    return sq;
}
