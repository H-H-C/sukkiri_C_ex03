#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef char String[1024];

int main(void)
{
  printf("カレンダーから縦に並んだ数字を３つ選び、その合計を入力してください\n");
  srand((unsigned)time(NULL));
  String goukei;
  scanf("%s", goukei);
  int kei = atoi(goukei) / 340;
  int x = kei - 7;
  int y = kei;
  int z = kei = 7;
  printf("あなたの選んだ数字は%dと%dと%dですね", x, y, z);
  return 0;
}