// write a c program to read 15 person age and find out hom many lie under baby adult or schoolboy
#include<stdio.h>
int main(){
    int a,b=0,c=0,A=0;
    for(int i=1;i<=15;i++){
        printf("Enter Age");
        scanf("%d",&a);
        if(a>=0 && a<6)
        b+=1;
        if(a>5 && a<18)
        c+=1;
        else
        A+=1;
    }
    printf("Baby%d\n Teen %d\n Adult%d",b,c,A);    
    return 0;
}
