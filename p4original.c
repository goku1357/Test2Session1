#include <stdio.h>
#include <math.h>
int input()
{
  int n;
  scanf("%d",&n);
  return n;
}
int find_fibo(int n)
{
  float pi=1.61803;
  float a=sqrt(5);
  float x=(pow(pi,n)-pow((1-pi),n))/a;
  printf("%f",x);
  return x;
}
void output(float x)
{
  printf("%f",x);
}

int main()
{
  int n;
  float x;
  n=input();
  x=find_fibo(n);
  output(x);
}