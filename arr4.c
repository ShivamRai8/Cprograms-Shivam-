// write a program in c to take n element in array and print the array in reverse order .
#include<stdio.h>
int main(){
    int n;
    printf("Enter size of array");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    };
    for(int i=0;i<n/2;i++){
        int m=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=m;

    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);

    }
return 0;
}