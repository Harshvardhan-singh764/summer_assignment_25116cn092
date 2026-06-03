#include<stdio.h>
int main(){
    int n, temp = 0;

    printf("enter the number:");
    scanf("%d",&n);
     
    for(int i =2; i<n ; i++){
        if(n%i ==0){
            temp = 1;
            break;
        }
        
    }
    if(temp == 0 && n>1)
    printf("number is prime number");
    else
    printf("number is not prime number ");
    return 0;
}