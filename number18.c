#include <stdio.h>
int main()
{
  int min, max, i, temp, num, rem;
  printf("Enter two numbers(intervals): ");
  scanf("%d %d", &min, &max);
  printf("Armstrong numbers between %d an %d are: ", min, max);
  for(i=min+1; i<max; ++i)
  {
      temp=i;
      num=0;
      while(temp!=0)
      {
          rem=(temp%10);
          num=num+(rem*rem*rem);
          temp/=10;
      }
      if(i==num)
      {
          printf("%d ",i);
      }
  }
