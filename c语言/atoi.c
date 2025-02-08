//该程序实现字符串转变为整形数字
#include <stdio.h>
int atoi(char s[]);
int main(){
    char s[100];
    scanf("%s",s);
    int num;
    num=atoi(s);
    printf("%d",num);
}
int atoi(char s[]){
    int sum=0;
    int i=0;
    while(s[i]!='\0'){
        sum=sum*10+(s[i]-'0');
        i++;
    }
    return sum;
}