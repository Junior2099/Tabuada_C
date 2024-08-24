#include <stdio.h>

int main() {

  int num;

  printf("Digite um número para exibir a tabuada ");
  scanf("%d", &num);

  printf("Tabuada do %d:\n", num);

  for (int i = 0; i <= 10; i++) {
    printf("%d x %d = %d\n", num, i, num * i);
  }

  return 0;
}