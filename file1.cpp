#include "file1.h"
#include <iostream>
float relat(float x, float y){
    float k;
    k=x-y;
    static int n;
    n++;
    printf("%d\n", n);
    return k;
}
