#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,c=0;
  printf("enter the n value:");
  scanf("%d",&n);
  if(n==1)
  {
      printf("it is neither prime nor composite");
  }
  else
{

  for(i=1;i<=n;i++)
  {
      if(n%i==0)
      {
          c++;
      }
  }
      if(c==2)
    {
        printf("GIVEN NUMBER IS PRIME");
    }
    else
    {
        printf("it is composite");
    }
}
}
