#include<stdio.h>
#include<conio.h>
int main()
{
int i,n;
printf("Enter a number that you want:");
scanf("%d",&n);
for ( i = 0; i <=n; i++)
{
    printf("\n%d",i*i);
}
}