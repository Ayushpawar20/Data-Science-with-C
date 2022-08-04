#include <stdio.h>
#include<stdlib.h>
void selection(int a[],int n){
    int i,j,min,swap;
    for(i=0;i<n-1;i++){min=i;
        for(j=i+1;j<n;j++){
            if(a[min]>a[j])min=j;
        }
        swap=a[i];
        a[i]=a[min];
        a[min]=swap;
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
   selection(a,n);
   for(int i=0;i<n;i++){
       printf("%d   ",a[i]);
   }
}