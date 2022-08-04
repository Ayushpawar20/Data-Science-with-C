#include<stdio.h>
#include<stdlib.h>
void swap(int arr[],int i,int j){
    int swap=arr[i];arr[i]=arr[j];arr[j]=swap;
}
int position(int arr[],int l,int r){
     int pivot=arr[r];int i=l-1;
     for(int j=l;j<r;j++){
         if(arr[j]<pivot){i++;swap(arr,i,j);}
     }
     swap(arr,i+1,r);
     return i+1;
}
void quickSort(int arr[],int l,int r){
    if(l<r){
        int mid=position(arr,l,r);
        quickSort(arr,l,mid-1);
        quickSort(arr,mid+1,r);
    }
}
int main(){
    int n;printf("enter n");scanf("%d",&n);
    int *a=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        printf("enter value %d : ",i+1);scanf("%d",&a[i]);
    }quickSort(a,0,n-1);
    for(int i=0;i<n;i++){
        printf("%d    ",a[i]);
    }
}