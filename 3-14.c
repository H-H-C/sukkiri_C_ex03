#include <stdio.h>
#include <stdlib.h>
#include <time.h>


typedef char String[1024];

int main(void)
{
  printf("４桁の暗証番号を生成します\n");
  srand((unsigned)time(NULL));
  int a = rand() % 10;
  int b = rand() % 10;
  int c = rand() % 10;
  int d = rand() % 10;
  printf("暗証番号:%d%d%d%d", a, b, c, d);
  return 0;
}