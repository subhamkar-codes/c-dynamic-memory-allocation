#include <stdio.h>
#include <stdlib.h>

int main(){
    float n = 5;
    float*ptr;

    ptr = (float*)malloc(n* sizeof(float));
    ptr[0] = 3;
    ptr [1] = 6;
    ptr [2] = 9;
    ptr [3] = 12;
    ptr [4] = 15;
    printf("%f %f %f %f %f\n", ptr[0] , ptr[1], ptr[3], ptr[4] , ptr[2]);
    return 0;
}