//该程序利用结构体（链表）实现约瑟夫环问题
#include <stdio.h>
#include <stdlib.h>
#define LEN 100
void left(int n,int k);
int main(int argc,char *argv[]){
    int n,k;
    if(argc!=3||(n=atoi(argv[1]))<=0||(k=atoi(argv[2]))<=0){
        printf("error");
        return 1;
    }
    else if(n>LEN){
        printf("beyond");
        return 1;
    }
    left(n,k);
    return 0;
}
void left(int n,int k){
    struct person{
        int number;
        int status;
    }circle[n];
    for(int i=0;i<n;i++){
        circle[i].number=i+1;
        circle[i].status=1;
    }
    int remain=n;
    int i=0,j=0;
    while(remain>0){
        if(circle[i].status==1){
            if((j+1)%k==0){
                printf("%d ",circle[i].number);
                circle[i].status=0;
                remain--;
            }
            j++;
        }
        i=(i+1)%n;
    }
        
}