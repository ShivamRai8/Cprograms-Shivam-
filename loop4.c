// Write a c program to find all leap year in a give ranage. 
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter Range of leep year");
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++){
        if(i % 4==0 &&  (i % 400==0 || i % 100 !=0))
        printf("%d Is Leap Year",i);
    }
    return 0;
}
