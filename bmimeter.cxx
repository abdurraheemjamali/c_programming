// To Find BMI Of Students
#include<stdio.h>
#include<math.h>
int main (){
    float B,W,H;
    printf("Enter Weight (In Kilogram) = ");
    scanf("%f",&W);
    printf("Enter Height (In Metres) = ");
    scanf("%f",&H);
// Body Mass Index = Weight / (Height)²
    B = W / ( H * H );
    printf("BMI = %.2f ",B);
    return 0;
}