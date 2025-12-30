#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d", &r); 
    scanf("%d", &c); 
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int total_value=r*c;
    int count=0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if(arr[i][j]==0){
                count++;
            }
        }
    }
    if(total_value==count){
        printf("Zero matrix");
    }else{
        printf("Not Zero matrix");

    }

    return 0;
}