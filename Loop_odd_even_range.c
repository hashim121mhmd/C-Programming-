#include<stdio.h>
#include <conio.h>

void main()
{
int num=0,max;
printf("Enter the range\nMax : ");
scanf("%d",&max);
printf("\nMin : ");
scanf("%d",&num);
for(;num<=max;num=num+1)
{
    if(num%2==0)
    {
    printf("%d Even\n",num);
    }
    else
    {
    printf("%d odd\n",num);
    }
}
}
