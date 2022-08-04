#include <stdio.h>
#include<stdlib.h>
void bubble(int a[],int n){
    int i,j,max,swap,issorted=0;
    while(!issorted){issorted=1;
        for(i=0;i<n;i++){
          if(a[i]>a[i+1]){swap=a[i];a[i]=a[i+1];a[i+1]=swap;issorted=0;}       
}n--; 
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
   bubble(a,n);
   for(int i=0;i<n;i++){
       printf("%d   ",a[i]);
   }
}