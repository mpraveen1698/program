#include<stdio.h>
#include<conio.h>
void main()
{
        int n,remainder,R=0;
        printf("the given  digit number is:");
        scanf("%d",&n);
        while(n>0)
        {
            remainder=n%10;
            R=R*10+remainder;
            n=n/10;
        }
        printf("the reverse order of given number:%d",R);
}
