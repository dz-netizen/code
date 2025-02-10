//该代码实现shellsort
#include<stdio.h>
#define SIZE 100
void shellsort(int a[],int len);
int main(){
    int a[SIZE];
    int i=0;
    while(1){
        scanf("%d",&a[i]);
        if(i==SIZE-1||a[i]==-1){//此处输入-1表示结束输入
            break;
        }
        i++;
    }
    shellsort(a,i);
    for(int j=0;j<i;j++){
        printf("%d ",a[j]);
    }
}
void shellsort(int a[],int len){
    int gap;
    for(gap=len>>1;gap>0;gap>>=1){
        for(int i=gap;i<len;i++){
            for(int j=i-gap;j>=0&&a[i]<a[j];j-=gap){
                int temp;
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }

        }
    }
}