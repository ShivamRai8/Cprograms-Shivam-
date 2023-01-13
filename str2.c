// wap in c to take a string from user and count total number of alphabet , 
// digit, vowels and special characters in it.

#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    gets(str);
    int i=0,a=0,d=0,v=0,sc=0;
    while(str[i]!='\0'){
        if(str[i]=='0'|| str[i]=='1'|| str[i]=='2'|| str[i]=='3'|| str[i]=='4'||str[i]=='5'||str[i]=='6'||str[i]=='7'||str[i]=='8'||str[i]=='9')
        d++;
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
             v++;
         
        if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122))
            a++;
        

        if((str[i]>=32 && str[i]<=47)|| (str[i]>=58 &&str[i]<=64)||(str[i]>=91 && str[i]<=96)|| (str[i]>= 123 &&str[i]<=127))
        sc++;
        
        i++;
    }

    printf("Alphabet %d digit %d Vowels %d special chracters %d",a,d,v,sc);
    return 0;
}