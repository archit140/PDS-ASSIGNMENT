#include <stdio.h>
int main()
{
    int num1,num2,num3,max;
    printf("ENTER the number");
    scanf("%d%d%d",&num1,&num2,&num3);

    max = (num1 > num2) ? 
          (num1 > num3 ? num1 : num3) : 
          (num2 > num3 ? num2 : num3);

    printf("The largest number is %d",max);
    return 0;


    
    

}