#include <stdio.h>

int main() {
  int *n;
  int tam;
  scanf("%d", &tam);
  n = malloc(tam * sizeof(int));
  for (int i = 0; i < tam; i++) {
    int *p;
    p = n + i;
    *p = i;
  }
  for (int i = 0; i < tam; i++) {
    int *p;
    p = n + i;
    printf("%d - %d\n", i, (n + 1));
  }
}