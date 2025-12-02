// 1st approach
#include <stdio.h>
#include <limits.h>  // For INT_MIN

int main() {
    int N;
    int X, max = INT_MIN;  // ✅ Start with smallest possible integer
    scanf("%d", &N);
    
    for(int i = 1; i <= N; i++){
        scanf("%d", &X);
        if(X > max){  // Simplified condition
            max = X;
        }
    }
    
    printf("%d\n", max);
    return 0; 
}
//2nd approach
// #include <stdio.h>
// int main() {
 
//      int N;
//      int X,max=0;
//      scanf("%d", &N);
//      for(int i = 1; i <= N; i++){
//         scanf("%d", &X);
//         if(max<=X){
//             max=X;
//          }else{
//             max=max;
//          }
//         }
//         printf("%d\n", max);
//       return 0; 
// }