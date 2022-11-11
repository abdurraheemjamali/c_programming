// To Find Simple Interest
#include<stdio.h>
int main (){
    int P,T;
    float SI,R;
    printf ("Enter P = ");
    scanf ("%d", &P);
    printf ("Enter R = ");
    scanf ("%f", &R);
    printf ("Enter T = ");
    scanf ("%d", &T);
// Simple Interest Formula
    SI = P * R * T / 100;
    printf ("SI = %.2f", SI);
    return 0;
}
    
    