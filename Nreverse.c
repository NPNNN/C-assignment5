#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n;
      printf("Enter number:");
      scanf("%d",&n);
    for ( i = 1; n >= i; n--)
    {
        printf("\n%d",n);
    }
    
    return 0;
}