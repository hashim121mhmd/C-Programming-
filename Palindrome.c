#include <stdio.h>
#include <conio.h>

void main()
{
    int num,r,rev=0;
    printf("Enter the number");
    scanf("%d",&num);
    for(int i=num;i!=0;i=i/10)
    {
      r=i%10;
      rev=rev*10+r;
    }
    printf("%d",rev);
    if(rev==num)
    {
    printf("\nNumber is palindrome");
    }
    else
    {
    printf("\nNumber is not palindrome");
    }
    }
