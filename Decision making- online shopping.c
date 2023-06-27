#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int a,b,c,d,e,f,g,h,i;
    int flip,snap,amaz;
    
    scanf("%d\n",&a);
    scanf("%d\n",&b);
    scanf("%d\n",&c);
    scanf("%d\n",&d);
    scanf("%d\n",&e);
    scanf("%d\n",&f);
    scanf("%d\n",&g);
    scanf("%d\n",&h);
    scanf("%d\n",&i);
    
    flip=(a-(a*b*0.01)+c);
    snap=(d-(d*e*0.01)+f);
    amaz=(g-(g*h*0.01)+i);
    printf("In Flipkart: Rs.%d",flip);
    printf("\nIn Snapdeal: Rs.%d",snap);     
    printf("\nIn Amazon: Rs.%d",amaz);
    
    if(flip<=snap && flip<=amaz){
        printf("\nChoose Flipkart");
    }
    else if(snap<=flip && snap<=amaz){         
        printf("\nChoose Snapdeal");              
    }
    else{
        printf("\nChoose Amazon");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
