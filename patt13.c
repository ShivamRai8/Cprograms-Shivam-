// Empty square With A,B,C,D.
#include<stdio.h>
int main(){
int n,m;
m=65;
printf("ENTER 'n' ");
scanf("%d",&n);
for(int i =1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(i==1 || i==n || j==1 || j==n)
        printf("*");
        else{
            if(m>69){
            m=65;
            printf("%c",m);
            m=m+1;}
            else{
                printf("%c",m);
                m+=1;}
        }
    }
    printf("\n");
}


return 0;
}