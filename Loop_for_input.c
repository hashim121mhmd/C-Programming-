#include<stdio.h>
#include <conio.h>

void main()
{
int num=0,max;
printf("Enter the maximum value : ");
scanf("%d",&max);
printf("\nEnter the minimum value : ");
scanf("%d",&num);
for(;num<=max;num=num+2)
{
 printf("%d\n",num);

}
}
