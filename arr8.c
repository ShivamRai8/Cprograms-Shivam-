//WAC to print even and odd positioned element.


#include<stdio.h>
int main(){
    int n;
    printf("Enter size of array");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    };
    printf("even positioned elemnt is-> ");
    for(int i=1;i<=n;i++){
        if(i%2==0){
            printf("%d ",a[i-1]);
        }
    }
    printf("odd positioned element is -> ");
    for(int i=1;i<=n;i++){
        if(i%2!=0){
        printf("%d ",a[i-1]);
    }
    }
return 0;
}