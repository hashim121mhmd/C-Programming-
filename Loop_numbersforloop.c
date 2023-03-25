#include<stdio.h>
#include <conio.h>

void main()
{
    int r,c,rm=6,cm=6;
    printf("Enter rows and colomns : ");
    scanf("%d",&rm);
for(r=1;r<=rm;r=r+1)
{
for(c=1;c<=r;c=c+1)
{
    printf("%d",r);
}
printf("\n");
}

 getch();
}

/*
1
12
123
1234
*/
/*
1
22
333
4444
55555
*/
