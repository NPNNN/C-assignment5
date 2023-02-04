#include<stdio.h>
#include<conio.h>
int main()
{
int i,n;
printf("Enter a number that you want:");
scanf("%d",&n);
for (i = 1; n >= i; n--)
{
    if (n%2!=0)
    {
    printf("\n %d",n);
    }

}
}