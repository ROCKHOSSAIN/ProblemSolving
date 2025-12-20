#include <stdio.h>
#include <math.h>
int main()
{
    int T;
    scanf("%d",&T);
    
    for (int i = 0; i < T; i++)
    {
        int M1, M2, D;
        scanf("%d %d %d", &M1, &M2, &D);
        
        int total_work = M1 * D;
        
        int total_farmers = M1 + M2;
        
     
        double new_days = (double)total_work / total_farmers;
        
 
        int fewer_days = D - (int)new_days;
        
        printf("%d\n", fewer_days);
    }

    return 0;
}