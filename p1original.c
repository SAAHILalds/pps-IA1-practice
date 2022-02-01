#include<stdio.h>
int input ()
{
  int a;
  printf("Enter value \n");
  scanf("%d",&a);
  return a;
}
int add(int a, int b, int *sum)
{
  sum = a+b;
  return sum;
}
void output (int a, int b, int sum)
{
  printf("sum is %d",sum);
}
int main ()
{
  int a,b,s=0,* sum;
  sum=&s;
  a = input ();
  b = input ();
  sum = add (a,b,*sum);
  output (a,b,sum);
  return 0;
}
}