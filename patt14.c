/*

*        *
**      **
***    ***
****  ****
**********

*/
// Empty square With A,B,C,D.
#include<stdio.h>
int main(){
int n;
printf("ENTER 'n' ");
scanf("%d",&n);
for(int i=1;i<=5;i++){
    for(int j=1;j<=i;j++)
    printf("*");
    for(int j=1;j<=2*(n-i);j++)
    printf(" ");
    for(int j=1;j<=i;j++)
    printf("*");

    printf("\n");
}


return 0;
}