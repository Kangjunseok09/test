#include<stdio.h>

int main(void)
{
  int n;
  scanf("%d", &n);
  printf("%d", n >> 2 & 1);
  return 0;
}
