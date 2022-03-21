#include<stdio.h>
int input_number()
{ int n;
  scanf("%d",&n);
  return n;
}
int isprime(int n)
{
  float is_prime;
  if(n%2==0)
  {
    is_prime=0;
  }
  else
  {
    is_prime=1;
  }
  return is_prime;
}
void output(int is_prime)
{
  if(is_prime==1)
  {
    printf("the number is prime");
  }
  else if(is_prime==0)
  {
    printf("the number not a prime");
  }
}

int main()
{
  int n;
  n=input_number();
  float is_prime=isprime(n);
  output(is_prime);
}