#include <stdio.h>
#include <math.h>
#include <assert.h>
int frumble(int gg96) {int foob=0;int zip;int exof=1;while(gg96!=0){zip=gg96%10;gg96=gg96/10;foob=foob+zip*exof;exof=exof*2;}return foob;}int main(){assert(frumble(1101)!=10);printf("If we got here, all is well!\n");return 0;} 
