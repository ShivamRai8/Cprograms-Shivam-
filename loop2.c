// write a c program to multiplication of two number a,b using + operator.
#include<stdio.h>
int main(){
    int a,b,c=0;
    printf("Enter Numbers");
    scanf("%d %d",&a,&b);
    for (int i =1;i<=a;i++){
        c+=b;

    }
    printf("multiplication :=%d",c);



    
    return 0;
}
