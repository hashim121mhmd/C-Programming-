int fab(int);
void main()
{
    int b;
    printf("Enter the required sequence");
    scanf("%d",&b);
if(b==1)
    printf("%d",0);
else if(b>=2)
{
    printf("%d",0);
    printf("%d",1);
 for(int i=2;i<b;i++)
  {
      printf("%d",fab(i-1));
  }
}
}

int fab(int a)
{
    if(a>=2)
    {
        return fab(a-1)+fab(a-2);
    }
    else
        {
        return a;
        }
}
