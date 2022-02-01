#include<stdio.h>
int input ()
{
  int a;
  printf("Enter value \n");
  scanf("%d",&a);
  return a;
}
int sum_n (int n)
{
 int s = 0,i = 0, a=0;
 for (i=0;i<n;i++){
     printf("Enter value ");
      printf(" %d \n",i+1);
  scanf("%d",&a);
  s = s + a ;
 }
  return s;
}
void output (int n, int sum)
{
  printf("Sum is %d",sum);
}
int main ()
{
  int n,sum;
  n = input ();
  sum = sum_n (n);
  output (n, sum);
  return 0;
}