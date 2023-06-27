#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() { 
    int m,w;
    scanf("%d",&m);
    scanf("%d",&w);
    printf("The required length is %d m",(2*m)+(2*w));
    printf("\nThe required area of carpet is %d sqm",m*w);
    return 0;
}
