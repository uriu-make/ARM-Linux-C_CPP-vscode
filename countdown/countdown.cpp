#include <stdio.h>

int main() {
  int i;
  printf("数値を入力:");
  fflush(stdout);
  scanf("%d", &i);
  while (i >= 0) {
    printf("%d\n", i);
    fflush(stdout);
    i--;
  }
  return 0;
}