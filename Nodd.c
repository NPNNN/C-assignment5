#include<stdio.h>
#include<conio.h>
int main()
{
int i,n;
printf("Enter a number that you want:");
scanf("%d",&n);
for (i = 1; i <= n; i++)
{
    if (i%2!=0)
    {
    printf("\n %d",i);
    }

}
}
