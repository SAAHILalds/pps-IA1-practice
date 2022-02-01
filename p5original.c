#include<stdio.h>
float input()
{
  float a;
  printf("Enter a number:");
  scanf("%f",&a);
  return a;
}
float my_sqrt(float n)
{
  double mid,start=0,end=n;
  while (end-start>0.0000001)
  {
    mid=(start+end)/2;
    if (mid*mid<n)
    {
      start=mid;
    }
    if (mid*mid>=n)
    {
      end=mid;
    }
  }
  return mid;
}
void output(float n, float sq)
{
  printf("your square root of %f is %f",n,sq);
}

int main()
{
  float n,sq;
  n=input();
  sq=my_sqrt(n);
  output(n,sq);
  return 0;
}