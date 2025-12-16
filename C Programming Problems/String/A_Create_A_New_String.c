#include <stdio.h>
int main(){
    char str1[1001],str2[1001];
    scanf("%s",str1);
    scanf("%s",str2);
    int count1=0,count2=0;
    for(int i=0;str1[i]!='\0';i++){
        count1++;
    }
    for(int i=0;str2[i]!='\0';i++){
        count2++;
    }
    printf("%d %d\n",count1,count2);
    printf("%s %s\n",str1,str2);
    return 0;
}