//该程序实现读入一组文本行，将最长的一行打印出来
#include <stdio.h>
#define MAXLINE 100
int my_get_line(char s[]);
void copy(char to[],char from[]);
int main(){
    char line[MAXLINE];
    char max_line[MAXLINE];
    int len=0;
    int max=0;
    while((len=my_get_line(line))>0){
        if(len>max){
            max=len;
            copy(max_line,line);
        }
    }
    if(max>0){
        printf("%s",max_line);
    }
}
int my_get_line(char s[]){
    char c;
    int len=0;
    int i;
    for(i=0;i<MAXLINE&&(c=getchar())!=EOF&&c!='\n';i++){
        s[i]=c;
        len++;
    }
    if(c=='\n'){
        s[i++]='\n';
    }
    s[i]='\0';
    return len;
}
void copy(char to[],char from[]){
        int i=0;
        while(from[i]!='\0'){
            to[i]=from[i];
            i++;
        }
        to[i]='\0';
}