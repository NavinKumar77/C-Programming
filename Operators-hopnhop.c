#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    int a=(x-3)*(x-3);
    int b=(y-4)*(y-4);
    int d=sqrt(a+b);
    printf("%d",d);       
    return 0;
}
