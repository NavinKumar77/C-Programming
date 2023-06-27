#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int bill,unit;
    scanf("%d",&unit);
    if(unit<=200){
        bill=unit*0.5;
    }else if(unit<=400){
        bill=(unit*0.65)+100;
    }else if(unit<=600){
        bill=(unit*0.80)+200;
    }else{
        bill=(unit*1.25)+425;
    }
        printf("Rs.%d",bill);
    return 0;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
