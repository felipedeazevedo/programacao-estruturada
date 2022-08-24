#include <stdio.h>
#include <locale.h>

int main(void) {

  setlocale(LC_ALL, "Portuguese");
  
  char nome[50], cpf[14], sexo;
  float altura, peso, rendimento;
  int idade = 0;

  printf("-------------------------- Formulário de cadastro --------------------------\n");
  printf("Informe seu nome: ");
  scanf("%[^\n]s", &nome);
  printf("Informe seu sexo (m - Masculino, f - Feminino): ");
  scanf(" %c", &sexo);
  printf("Informe sua altura: ");
  scanf("%f", &altura);
  printf("Informe seu peso: ");
  scanf("%f", &peso);
  printf("Informe seu cpf: ");
  scanf("%s", &cpf);
  printf("Informe sua idade: ");
  scanf("%d", &idade);
  printf("Informe seu rendimento: ");
  scanf("%f", &rendimento);

  printf("\n");
  
  printf("Seu nome é: %s \n", nome);
  //printf(sexo == 'm' ? "Seu sexo é: Masculino \n" : "Seu sexo é: Feminino \n");
  printf("Seu sexo é: %s \n", sexo == 'm' ? "Masculino" : "Feminino");
  printf("Sua altura é : %f \n", altura);
  printf("Seu peso é : %f \n", peso);
  printf("Seu cpf é : %s \n", cpf);
  printf("Sua idade é : %d \n", idade);
  printf("Seu rendimento é : %.2f \n", rendimento);
  
  return 0;
}
