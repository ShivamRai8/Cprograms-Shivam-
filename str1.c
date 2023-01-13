// 1) wap in c to take a string from user and count total number of words in it.

#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    gets (str);
    printf("%s",str);
    int i=0;
    int m=1;
    while(str[i]!='\0'){
        i++;
        if(str[i]==' ')
        m++;
    }
    printf("Number of words is %d",m);
    return 0;
}