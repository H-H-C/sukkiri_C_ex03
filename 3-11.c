#include <stdio.h>

typedef char String[1024];
int main(void)
{
  int age = 29;
  String name = "かいとう";
  printf("私の年齢は%dです。\n名前は%sです", age, name);
  return 0;
}