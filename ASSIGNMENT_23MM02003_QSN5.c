#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    
    if((num & 1)==0){
        printf("Number is even");
    }
    else{
        printf("Number is odd");

    }
    return 0;


}


