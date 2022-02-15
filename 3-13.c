#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef char String[1024];
int main(void)
{
  srand((unsigned)time(NULL));
  int r = rand() % 100;
  printf("私の年齢は%dです", r);
  return 0;
}