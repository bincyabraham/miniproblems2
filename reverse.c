#include<stdio.h>
void main()
{
    int i,n,rev=0,rem=0;
    printf("Enter the number to reverse:");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        rev=rem+(rev*10);
        n=n/10;
    }
    printf("Reversed number=%d",rev);
}