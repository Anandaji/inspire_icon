#include <stdio.h>

int main()
{
    int yr;
    printf("Enter the year: ");
    scanf("%d", &yr);
    if(yr%400==0)
    printf("yes");
    else if(yr%100==0)
    {
        printf("no");
        
    }else if(yr%4==0)
    printf("yes");
    else
    printf("no");
}
