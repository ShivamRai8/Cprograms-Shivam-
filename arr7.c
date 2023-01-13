//write a c program to print even and odd indexed elements seprately.
#include<stdio.h>
int main(){
    int n;
    printf("Enter size of array");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    };
    printf("even indexed elements-> ");
    for(int i=0;i<n;i++){
    if(i%2==0){
        printf("%d ",a[i]);
    }
    }
    printf("odd indexed elemnets-> ");
    for(int i=0;i<n;i++ ){
        if(i%2!=0){
            printf("%d ",a[i]);
        }
    }

    
return 0;
}