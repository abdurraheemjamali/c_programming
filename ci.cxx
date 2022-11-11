// To Find Compound Interest In HDFC Bank
#include<stdio.h>
#include<math.h>
int main () {
    float CI,P,R,T;
    printf ("Enter P = ");
    scanf ("%f", &P);
    printf ("Enter R = ");
    scanf ("%f", &R);
    printf ("Enter T = ");
    scanf ("%f", &T);
// Compound Interest Formula
    CI = P * (pow(( 1 + R / 100 ),T));
    printf ("Compound Interest Is %f", CI);
    return 0;
}