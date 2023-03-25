#include<stdio.h>
#include<conio.h>
char prime(int a)
{
    int i;
    if(a<=1)
    {
        return 3;
    }
    else
        {
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        {
           return 1;
        }
    }
    if(a==i)
    {
        return 2;
    }
        }
}

void main()
{
    int  a=0,c;
    printf("Enter a Number :");
    scanf("%d",&a);
    switch(prime(a))
    {
    case 1:
        printf("Composite");
        break;
    case 2:
        printf("Prime");
        break;
    case 3:
        printf("Neither prime nor composite");
        break;
    }
}
