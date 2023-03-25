#include<stdio.h>
#include<conio.h>
void main()
{
int num,i;
printf("Enter a value");
scanf("%d",&num);

for(i=2;i<=(num/2);i++)
{
    if(num%i==0)
    {
        printf("\nComposite");
        goto ex;
    }

}
if(i==(num/2)+1)
{
printf("prime\n");
}
if(num==0 || num==1)
{
printf("Neither prime nor composite\n");
}

    ex:
    getch();
}
