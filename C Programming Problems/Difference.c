#include <stdio.h>
int main() {
    long long A, B, C, D;              // Change to long long
    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);   
    long long X = (A * B) - (C * D);   // Use long long for calculation
    printf("Difference = %lld\n", X);  // Use %lld for output
    return 0; 
}