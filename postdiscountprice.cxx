// To Find Amount After Discount:
#include<stdio.h>
#include<math.h>
int main (){
    float A,D,P;
    printf("Enter Price = ");
    scanf("%f",&P);
    printf("Enter %% Discount = ");
    scanf("%f",&D);
// Amount After Discount:
    A = P - D * P / 100;
    printf("Amount After %.2f %% Off = %.2f",D,A);
    return 0;
}    