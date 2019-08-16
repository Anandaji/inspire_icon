#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
     if(a<=0)
        printf("invalid");
    else if(a%2==0)
        printf("Even");
    else
        printf("Odd");
 
        
}
