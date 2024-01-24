#include<stdio.h>
int main(){
    float cost,tip,tax,total;
    printf("Meal cost");
    scanf("%f",&cost);
    printf("tax is");
    scanf("%f",&tax);
    printf("Tip is");
    scanf("%f",&tip);
    tip=(tip*cost)/100;
    tax=(tax*cost)/100;
    total=cost+tip+tax;
    printf("The total cost is %.f",total);
    return 0;
}