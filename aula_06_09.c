#include <stdio.h>
#include <locale.h>

void printMenu();
float soma(float n1, float n2);
float subtrai(float n1, float n2);
float multiplica(float n1, float n2);
float divide(float n1, float n2);

int main(void) {

  setlocale(LC_ALL, "Portuguese");

  float n1, n2;
  char opcao;
  
  printf("------------------ CALCULADORA ------------------\n");
  printf("Informe os valores a serem calculados: ");
  scanf("%f %f", &n1, &n2);
  printf("Informe a operação desejada:\n");
  printMenu();
  scanf(" %c", &opcao);
  
  switch(opcao) {
    case '+':
      printf("Resultado: %.2f", soma(n1, n2));
    break;
    case '-':
      printf("Resultado: %.2f", subtrai(n1, n2));
    break;
    case '*':
      printf("Resultado: %.2f", multiplica(n1, n2));
    break;
    case '/':
      printf("Resultado: %.2f", divide(n1, n2));
    break;
    default: printf("Opcao invalida!");
  }
  return 0;
}

void printMenu() {
  printf("'+': somar\n");
  printf("'-': subtrair\n");
  printf("'*': multiplicar\n");
  printf("'/': dividir\n");
}

float soma(float n1, float n2) {
  return n1 + n2;
}

float subtrai(float n1, float n2) {
  return n1 - n2;
}

float multiplica(float n1, float n2) {
  return n1 * n1;
}

float divide(float n1, float n2) {
  return n1 / n2;
}
