//left shift in array.
#include<stdio.h>
int main(){
    int n,r;
    printf("Enter size of array");
    scanf("%d",&n);
    printf("enter value of r");
    scanf("%d",&r);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    for(int i=0;i<r;i++){
        int m=a[0];
        for(int j=0;j<n;j++){
            a[j]=a[j+1];
        }
        a[n-1]=m;
    }

    for(int i=0;i<n;i++){
        printf("%d ",a[i]);

    }
return 0;
}