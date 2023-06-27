#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int getSum(int *inputArray, int lastIndex);
 
int main(){
    int inputArray[100], counter, numberCount;
    scanf("%d", &numberCount);
    for(counter = 0; counter < numberCount; counter++){
        scanf("%d", &inputArray[counter]);
    }
     
    printf("%d",getSum(inputArray,numberCount - 1));
 
    return 0;
}
 
int getSum(int *inputArray, int lastIndex){
    int mid;
    if(NULL == inputArray || lastIndex < 0)
        return 0;
    return inputArray[lastIndex] + getSum(inputArray, lastIndex -1);
}
