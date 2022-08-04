#include <stdio.h>
#include<stdlib.h>
 void insertionSort(int a[], int length) 
 {
    int i, j, value;
    for(i = 1; i < length; i++) 
	{
         value = a[i];
         for (j = i - 1; j >= 0 && a[ j ] > value; j--) 
	    {
             a[j + 1] = a[ j ];
         }
         a[j + 1] = value;
     }
 }

int main()
{
   int *a,n;printf("enter n");scanf("%d",&n);
   a=(int*)malloc(n*sizeof(int));
   for(int i=0;i<n;i++){
       printf("enter value %d :  ",i+1);
       scanf("%d",&a[i]);
   }
   insertionSort(a,n);
   for(int i=0;i<n;i++){
       printf("%d   ",a[i]);
   }
}