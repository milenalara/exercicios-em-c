#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int p, d1, d2;

  scanf("%i", &p);
  scanf("%i", &d1);
  scanf("%i", &d2);

  if (p == 0)
  {
    if ((d1 + d2) % 2 == 0)
    {
      printf("%i", 0);
    }
    else
    {
      printf("%i", 1);
    }
  }
  else
  {
    if ((d1 + d2) % 2 == 0)
    {
      printf("%i", 1);
    }
    else
    {
      printf("%i", 0);
    }
  }

  return 0;
}