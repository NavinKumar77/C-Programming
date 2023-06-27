#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int k,r,temp,sqr;
    scanf("%d",&k);
    temp=k;
    sqr = k*k;
    int count=0;
    do{
        r=k%10;
        k=k/10;
        count++;
    }while(k!=0);
        int p =pow(10,count);
        int quo= sqr%p;
        int rem= sqr/p;
        int sum =quo+rem;
        if(sum==temp){
            printf("Kaprekar Number");
        }else{
            printf("Not a Kaprekar Number");
        }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
