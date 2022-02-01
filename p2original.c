#include<stdio.h>
int input ()
{
  int a;
  printf("Enter value \n");
  scanf("%d",&a);
  return a;
}
int compare(int a, int b, int c)
{
 int largest = 0;
 if (a > b && a > c) 
   { largest = a; }
 if (b > a && b > c) 
    { largest = b; }
 if ((c > b) && (c > a)) 
    { largest = c; }
 
  return largest;
}
void output (int a, int b, int c, int largest)
{
  printf("Largest Number is %d",largest);
}
int main ()
{
  int a,b,c,largest;
  a = input ();
  b = input ();
  c = input ();
  largest = compare (a,b,c);
  output (a,b,c,largest);
  return 0;
}