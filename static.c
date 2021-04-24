#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "lib1.h"

int main() {    
    int command = 0;

    while(scanf("%d",&command)!=EOF) {

        if(command == 1) {
            int args[1];
            //float Res;
            scanf("%d",&args[0]);
            //Res = E(args[0]);
            printf("%f\n",E(args[0]));
        }
        else
        if(command == 2) {
            float args[2];
            float Res;
            scanf("%f %f",&args[0],&args[1]);
            Res = Square(args[0], args[1]);
            printf("%f\n",Res);
        }

    }
}
