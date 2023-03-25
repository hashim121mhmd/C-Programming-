#include <stdio.h>
#include <conio.h>

void odd_even(int a)
{
    if(a%2)
    {
        printf("%d is odd",a);
    }
    else
        {
        printf("%d is even",a);
        }
}

void prime(int a)
{int i;
    if(a==0||a==1)
    {
        printf("%d is neither composite nor prime",a);
        goto lab;
    }
    for(i=2;i<=(a/2);i++)
    {
        if(a%i==0)
        {
            printf("%d is Composite\n",a);
            goto lab;
        }
    }
    lab:
    if(i==(a/2)+1)
    {
        printf("%d is Prime\n",a);
    }

}

void input(int *a,int *b)
{
 printf("Enter The Number : ");
scanf("%d",a);
printf("If you want to check\nODD or Even Press 1\nPrime or Composite 2");
scanf("%d",b);
}

void main()
{

int num,op;
char c;
do
{
input(&num,&op);

if(op==1)
{
    odd_even(num);
}
else if(op==2)
{
    prime(num);
}
i:
printf("\nDo you want to continue : y/n");
scanf(" %c",&c);
if(c!='n' && c!='y')
{
    printf("\nWrong input, Try again!!!\a");
    goto i;
}
}while(c=='y');
}

