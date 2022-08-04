#include<stdio.h>
#include<stdlib.h>
void binarySearch(int a[],int n,int key){
    int start=0,end=n-1,mid;
    while(start<=end){mid=(start+end)/2;
        if(key==a[mid]){printf("key %d is found at position %d and index %d",key,mid+1,mid);break;}
        else if(key>mid)start=mid+1;
        else end=end-1;
    }
    if(start>end)printf("not found");
}
int main(){
    int n;printf("enter number of elements");scanf("%d",&n);
    int *a=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        printf("enter value %d : ",i+1);scanf("%d",&a[i]);
    }
    printf("enetr key : ");int key;scanf("%d",&key);
    binarySearch(a,n,key);
}