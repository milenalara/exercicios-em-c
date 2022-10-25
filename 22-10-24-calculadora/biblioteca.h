#ifndef BIBLIOTECA_H_INCLUDED
#define BIBLIOTECA_H_INCLUDED

int calcSoma(int x, int y)
{
  int r;
  r = x + y;
  return r;
}

int calcSub(int x, int y)
{
  int r;
  r = x - y;
  return r;
}

int calcMulti(int x, int y)
{
  int r;
  r = x * y;
  return r;
}

int calcDiv(int x, int y)
{
  float r;
  r = (float)x / y;
  return r;
}

#endif // BIBLIOTECA_H_INCLUDED