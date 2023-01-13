// WAC to copy elements in other array.
#include<stdio.h>
int main(){
    int n;
    printf("Enter size of array");
    scanf("%d",&n);
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    printf("second array is:");
    for(int i =0;i<n;i++){
    printf("%d ",b[i]);}
return 0;
}