#include<stdio.h>
void main()
{
int s;
printf("Enter size of array ");
scanf("%d",&s);
int a[s];
int sum=0;
printf("Enter the numbers : ");
for(int i=0;i<s;i++)
{
scanf("%d",&a[i]);
}
printf("Odd\n");
for(int i=0;i<s;i++)
{
if(a[i]%2)
{
    printf("%d,",a[i]);
}
}
printf("\nEven\n");
for(int i=0;i<s;i++)
{
if(!(a[i]%2))
{
    printf("%d,",a[i]);
}
}
}
