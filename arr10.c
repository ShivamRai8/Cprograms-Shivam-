// Right rotate of array or elemnts inside array by r.


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
        int m=a[n-1];
        for(int j=0;j<n-1;j++){
            a[n-1-j]=a[n-j-2];

        }
        a[0]=m;
    }

    for(int i=0;i<n;i++){
        printf("%d ",a[i]);

    }
return 0;
}