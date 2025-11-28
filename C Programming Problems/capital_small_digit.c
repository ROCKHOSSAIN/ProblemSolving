#include <stdio.h>
int main()
{
    char C;
    scanf("%c", &C);
    if (C >= '0' && C <= '9')
    {
        printf("IS DIGIT");
    }
    else if (C >= 'A' && C <= 'Z')
    {
        printf("ALPHA\nIS CAPITAL");
    }
    else
    {
        printf("ALPHA\nIS SMALL");
    }
    return 0;
}