// Write a program in c to check given no is armstrong no or not. and also find no of digit in given number 
#include<stdio.h>
int main(){

    int a,b,c=0,d=0,sum=0;
    scanf("%d",&a);
    while(a>0){
        c+=1;

        a=a/10;
    }
    int t2=a;
    printf("Digit is:= %d \n",c);
    
    while(t2>0){
        int e=1;
        int d=t2%10;
        for(int j=1;j<=c;j++){
            e=e*d;}
        sum=sum+e;
        t2=t2/10;

        }
        printf("%d\n",sum);

        if(sum==a)
        printf("Number is armstrong number");
        else
        printf("Number is not an armstrong number");
    
    return 0;
}