#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("\nEven numbers from 1 to %d",n);
    for(i=1;i<=n;i=i+2)
    {
        printf("\n%d",i);
    }
}
 