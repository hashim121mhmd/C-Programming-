#include<stdio.h>
void main()
{
int s;
printf("Enter size of array ");
scanf("%d",&s);
float a[s];
float sum=0;
printf("Enter the rates : ");
for(int i=0;i<s;i++)
{
scanf("%f",&a[i]);
}
for(int i=0;i<s;i++)
{
sum=sum+a[i];
}
printf("%f",sum/s);
getch();
}
