#include <stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the number: ");
    scanf("%d", &n);
    if(n<=0){
    printf("Its not natural number");    
    }
    
    for(i=1;i<=n;i++);
    {
        sum=sum+i;

     }
     printf("%d",sum);
}
