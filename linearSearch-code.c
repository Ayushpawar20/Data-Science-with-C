#include<stdio.h>
#include<stdlib.h>
int linearSearch(int a[],int n,int key){
    int i;
    for(i=0;i<n;i++){
        if(a[i]==key)return i;
    }
    if(i==n)return -1;
}
int main(){
    int n;printf("enter number of elements");scanf("%d",&n);
    int *a=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        printf("enter value %d : ",i+1);scanf("%d",&a[i]);
    }
    printf("enetr key : ");int key;scanf("%d",&key);
    int b=linearSearch(a,n,key);
    if(b==-1)printf("not found");
    else printf("key is at position %d and index %d",b+1,b);
}