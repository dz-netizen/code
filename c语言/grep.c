//该程序实现输出带有特定子串的行，其中grep含义为globally search a regular expression and print 
#include<stdio.h>
#define SIZE 100
char a[]="ould";
int my_get_line(char s[]);
int str_index(char s[]);
int main(){
    char array[SIZE];
    while(my_get_line(array)>0){
        if(str_index(array)>=0){
            printf("%s",array);
        }
    }
    return 0;
}
int my_get_line(char s[]){
    char c;
    int i=0;
    while((c=getchar())!=EOF&&c!='\n'){
        s[i++]=c;
    }
    if(c=='\n'){
        s[i++]='\n';
    }
    s[i]='\0';
    return i;
}
int str_index(char s[]){
    int k=0,count=0;
    for(int i=0;i<SIZE&&s[i]!='\0';i++){
        for(int j=i;j<SIZE&&a[k]!='\0'&&s[j]==a[k];j++,k++){
        }
        if(a[k]=='\0'){
            return 1;
        }
    }
    return -1;
}