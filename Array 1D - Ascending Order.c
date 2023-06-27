#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int n;
    int temp;
    int arr[50];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1])
            {
                
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
        }
        }
    }
    printf("The Sorted array is:\n");
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}
