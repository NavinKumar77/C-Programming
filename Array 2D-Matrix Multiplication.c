#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,m,i,j,k,arr1[30][30],arr2[30][30],arr3[30][30];
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            arr3[i][j]=0;
        for(k=0;k<n;k++){
            arr3[i][j]+=arr1[i][k]*arr2[k][j];
        }
    }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d\t",arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
