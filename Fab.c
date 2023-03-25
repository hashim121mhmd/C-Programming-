void fab(int);
void main()
{
    int b;
    printf("Enter the required sequence");
    scanf("%d",&b);
  fab(b);

}
void fab(int b)
{
        int a[]={0,1};
         if(b<=0)
    {
    printf("Wrong Input");
    }
    else if(b==1)
    {    printf("Fabinacci Series\n");
    printf("%d,",a[0]);
    }
    else if(b==2)
    {
            printf("Fabinacci Series\n");
      printf("%d,%d,",a[0],a[1]);
    }
    else if(b>2)
    {
        printf("Fabinacci Series\n");
         printf("%d,%d,",a[0],a[1]);
    for(int i=1;i<=b-2;i++)
    {
        int t=a[0]+a[1];
        a[0]=a[1];
        a[1]=t;
        printf("%d,",a[1]);
    }
    }
}
