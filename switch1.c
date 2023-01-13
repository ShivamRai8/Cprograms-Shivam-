// wapc to check weather a  given no. is positive , nagative or zero using only switch case.

#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    switch(a>0){
        case 1: printf("a>1");
        break;
        case 0: 
            switch(a<0){
                case 1 :
               printf("nagative");
               break;
               case 0 :
               printf("0");
               break;
            }
        
    }   
    return 0;
}