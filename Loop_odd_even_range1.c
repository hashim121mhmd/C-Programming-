#include<stdio.h>
#include <conio.h>

void main()
{
int num=0,max,temp;
printf("Enter the range\nMax : ");
scanf("%d",&max);
printf("\nMin : ");
scanf("%d",&num);
printf("\nEven:\n");
temp=num;
for(;num<=max;num=num+1)
{printf("\nEven:\n");
    if(num%2==0)
    {
    printf(" %d,",num);
    }
}
printf("\nOdd:\n");
for(num=temp;num<=max;num=num+1)
{
    if(num%2==1)
    {
    printf(" %d,",num);
    }
}

}
