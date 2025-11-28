#include <stdio.h>
int main() {
 
    long long int M,N;
    scanf("%lld %lld", &M, &N);
    long long int sum=M%10 + N%10; 
    printf("%lld\n", sum);
    return 0; 
}