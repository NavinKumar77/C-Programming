#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 int Size, i, a[10];
 int Even_Sum = 0, Odd_Sum = 0;
    scanf("%d", &Size);
 for(i = 0; i < Size; i++)
 {
      scanf("%d", &a[i]);
 }
 for(i = 0; i < Size; i ++)
 {
   if(a[i] % 2 == 0)
   {
     Even_Sum = Even_Sum + a[i];
   }
   else
   {
     Odd_Sum = Odd_Sum + a[i];
   }
 }
 printf("The sum of the even numbers in the array is %d ", Even_Sum);
 printf("\nThe sum of the odd numbers in the array is %d ", Odd_Sum);
    return 0;
}
