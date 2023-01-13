// To take input and print array from user .


#include<stdio.h>
int main(){
    int n;
    printf("Enter size of array");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Array is[");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);

    }
    printf("]");
return 0;
}
