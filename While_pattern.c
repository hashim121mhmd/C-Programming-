#include<conio.h>
#include<stdio.h>
void main()
{
int r,c,rm;
    printf("Enter rows and colomns : ");
    scanf("%d",&rm);
    r=1;
    while(r<=rm)
    {
        c=1;
        while(c<=r)
        {
            printf("*");
            c++;
        }
        printf("\n");
        r++;
    }
 getch();
}
/*
*
**
***
****
*/
