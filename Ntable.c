#include<stdio.h>
#include<conio.h>
int main()
{
int i,n;
printf("Enter a number that you want:");
scanf("%d",&n);
for ( i = 1; i <=10; i++)
{
    printf("\n%d",i*n);
}
return 0;
}
