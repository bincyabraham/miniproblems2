#include<stdio.h>
void main()
{
    int i=1,n,s=0;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("\nMultiplication table of %d",n);
    do
    {
        s=i*n;
        printf("\n%d*%d=%d",i,n,s);
        i++;
    } while (i<=10);
}