#include<stdio.h>
#include<stdlib.h>
void merge(int arr[],int l,int mid,int r){
    int n1=mid-l+1,n2=r-mid,a[n1],b[n2];
    for(int i=0;i<n1;i++){a[i]=arr[l+i];}
    for(int i=0;i<n2;i++){b[i]=arr[mid+1+i];}
    int i=0,j=0,k=l;
    while(i<n1&&j<n2){
        if(a[i]>b[j]){
            arr[k]=b[j];j++;k++;
        }
        else{
            arr[k]=a[i];i++;k++;
        }
    }
    while(i<n1){
        arr[k]=a[i];i++;k++;
    }
     while(j<n2){
        arr[k]=b[j];j++;k++;
    }
}
void mergeSort(int arr[],int l,int r){
    int pivot;
    if(l<r){
        pivot=(l+r)/2;
        mergeSort(arr,l,pivot);
        mergeSort(arr,pivot+1,r);
        merge(arr,l,pivot,r);
    }
}
int main(){
    int n,*a;printf("eneter n");scanf("%d",&n);
    a=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        printf("enter value%d  :",i+1);
        scanf("%d",&a[i]);
    }
    mergeSort(a,0,n-1);
    for(int i=0;i<n;i++){
        printf("%d   ",a[i]);
    }
}