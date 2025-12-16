#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    scanf("%s",str);
    int length = strlen(str);
    printf("Length of the string using strlen: %d\n",length);

    return 0;
}