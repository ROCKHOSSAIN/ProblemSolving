#include <stdio.h>
int main() {
     long long X, Y;  // Still need long long
     scanf("%lld %lld", &X, &Y);
     
     long long sum = X + Y;
     long long mul = X * Y;
     long long diff = X - Y;
     
     printf("%lld + %lld = %lld\n", X, Y, sum);
     printf("%lld * %lld = %lld\n", X, Y, mul);
     printf("%lld - %lld = %lld\n", X, Y, diff);
     
     return 0; 
}