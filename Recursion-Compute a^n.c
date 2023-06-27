#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
static int power(int a,int b){
    if(b!=0){
        return (a * power(a,b - 1));
    }else{  
            return 1;
}
    }
int main() {
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    c=power(a,b);
    printf("The value of %d power %d is %d",a,b,c);
    return 0;
}

