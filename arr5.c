// Write a program in c to find sum of all elemnet in array.


#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter size of array");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    };





    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    printf("sum is:%d",sum);
return 0;
}