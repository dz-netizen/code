//该程序利用链表实现一个1，2，3，4……的序列
#include<stdio.h>
#include<stdlib.h>
struct list{
    int num;
    struct list * next;
};
struct list *lloc();
void printlist(struct list * plist);
int main(int argc,char *argv[]){
    int n;
    while(argc!=2||(n=atoi(argv[1]))<=0){
        printf("error");
        return 1;
    }
    struct list *p,*plist;
    plist=NULL;
    while(n>0){
        p=lloc();
        p->num=n;
        p->next=plist;
        plist=p;
        n--;
    }
    printlist(plist);
    return 0;
}
struct list *lloc(){
    return (struct list *)malloc(sizeof(struct list));
}
void printlist(struct list * plist){
    struct list *pnode;
    pnode=plist;
    while(pnode!=NULL){
        printf("%d ",pnode->num);
        pnode=pnode->next;
    }
}