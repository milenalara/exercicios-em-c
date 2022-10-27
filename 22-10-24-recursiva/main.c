#include <stdio.h>
#include <stdlib.h>
int fatorial(int n);

int main()
{
  printf("5! = %i\n", fatorial(5));
  return 0;
}

int fatorial(int n)
{
  int resp;
  if (n == 0)
  {
    resp = 1;
  }
  else
  {
    resp = n * fatorial(n - 1);
  }
  return resp;
}