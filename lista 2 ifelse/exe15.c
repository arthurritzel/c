#include <stdio.h>

int main() {
  char op;
  int s = 0;
  printf("Responda com S ou N\n");
  printf("Telefonou para a vitima: ");
  scanf("%s", &op);
    if(op == 's' || op == 'S'){
        s++;
    }
  printf("Esteve no local do crime: ");
  scanf("%s", &op);
    if(op == 's' || op == 'S'){
        s++;
    }
  printf("Mora perto da vitima: ");
  scanf("%s", &op);
    if(op == 's' || op == 'S'){
        s++;
    }
  printf("Devia para vitima: ");
  scanf("%s", &op);
    if(op == 's' || op == 'S'){
        s++;
    }
  printf("Trabalhou com a vitima: ");
  scanf("%s", &op);
    if(op == 's' || op == 'S'){
        s++;
    }
  if (s == 5) {
    printf("Classificação: Assassino\n");
  } else if (s >= 3) {
    printf("Classificação: Cúmplice\n");
  } else if (s == 2) {
    printf("Classificação: Suspeito\n");
  } else {
    printf("Classificação: Inocente\n");
  }
}
