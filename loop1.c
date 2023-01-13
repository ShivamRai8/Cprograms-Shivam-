// Write a c program to convert given number into binary number.
#include<stdio.h>
int main(){
    int a,b,c=0;
    printf("Enter Number");
    scanf("%d %d",&a,&b);
    for(int i=a;i<b;i++){
        if(i%2!=0){
            c=c+i;
        }


    }
    printf("%d",c); 



    
    return 0;
}
