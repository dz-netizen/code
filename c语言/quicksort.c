//该程序实现quicksort
#include<stdio.h>
#define SIZE 100
void quicksort(int data[],int left,int right);
void swap(int data[],int i,int j);
int main(){
    int data[SIZE];
    int i=0;
    while(1){
        scanf("%d",&data[i]);
        if(data[i]==-1){
            break;
        }
        i++;
    }
    quicksort(data,0,i-1);
    for(int j=0;j<i;j++){
        printf("%d ",data[j]);
    }
}
void quicksort(int data[],int left,int right){
    int pivot=data[(right+left)/2];
    int j=left;
    if(right<=left){
        return ;
    }
    swap(data,left,(right+left)/2);
    for(int i=left+1;i<=right;i++){
        if(data[i]<pivot){
            swap(data,j+1,i);
            j++;
        }
    }
    swap(data,left,j);
    quicksort(data,left,j-1);
    quicksort(data,j+1,right);
}
void swap(int data[],int i,int j){
        int temp;
        temp=data[i];
        data[i]=data[j];
        data[j]=temp;
}