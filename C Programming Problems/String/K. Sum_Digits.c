#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);

    char str[1000001];
    scanf("%s",str);
    
    int sum=0;
    for(int i=0;i<num;i++){
        int actual_number=str[i]-'0';
        sum+=actual_number;
    }
            printf("%d",sum);

    return 0;
}