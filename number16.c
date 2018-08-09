#include<stdio.h>
#include<conio.h>
#include<math.h>
 
void main()
{
    int  i, j, s, e, flag=0;
    clrscr();
printf("\n Enter two numbers Intervals : ");
scanf("%d%d",&s,&e);
printf("\n The prime numbers between %d and %d are :",s,e);
for(i=s+1;i<e;i++)
    {
flag=0;
for(j=2;j<=sqrt(i);j++)      
 {
if(i%j==0)
{
flag=1;
break;
}
}
 if (flag==0)
 {
printf(" %d ",i);
 }
    }
