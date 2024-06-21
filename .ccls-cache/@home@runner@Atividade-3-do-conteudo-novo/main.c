#include <stdio.h>

int main() {
  
  int contador = 0; // Contador inicializado em 0
  int numero; // Variável para armazenar o número digitado pelo usuário
  int soma = 0; // Variável para armazenar a soma dos números

  // Laço do-while para pedir 5 números e somá-los
  do {
      printf("Digite um numero (%d/5): ", contador + 1);
      scanf("%d", &numero);
      soma += numero; // Adiciona o número digitado à soma
      contador++; // Incrementa o contador
  } while (contador < 5); // Continua o laço enquanto contador for menor que 5

  // Exibe o resultado da soma
  printf("A soma dos numeros digitados e: %d\n", soma);
  
}