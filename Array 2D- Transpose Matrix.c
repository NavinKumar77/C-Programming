#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   int a;
    scanf("%d",&a);
    int arr[a][a];
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            scanf("%d",&arr[i][j]);
            printf("%d\t",arr[i][j]);
        }printf("\n");
    }
    printf("Transpose matrix is:\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            printf("%d\t",arr[j][i]);
        }printf("\n");
    }
    return 0;
}
