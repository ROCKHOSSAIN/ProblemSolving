// #include <stdio.h>
// int main() {
 
//      int num;
//      scanf("%d", &num);
//      for(int i=1;i<=num;i++){
//      int n;
//      scanf("%d", &n);
//      if(n==0){
//             printf("%d",n);
//      }
//          while(n!=0){
//              printf("%d ",n%10);
//              n=n/10;
//          }
//          printf("\n");
//      }
//       return 0; 
// }
#include <stdio.h>
int main() {
 
     int num;
     scanf("%d", &num);
     for(int i=1;i<=num;i++){
     int n;
     scanf("%d", &n);
     
         do{
             printf("%d ",n%10);
             n=n/10;
         }while(n!=0);

         printf("\n");
     }
      return 0; 
}