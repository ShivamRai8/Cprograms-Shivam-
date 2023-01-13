// Write a program in c to print even and odd number of an array.

# include<stdio.h>
int main (){
    int n;
    printf("enter size of array:");
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("even value of array is:");
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            printf(" %d",a[i]);
        }
    }
    return 0;
}