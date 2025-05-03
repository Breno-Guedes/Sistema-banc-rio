#include <locale.h>
#include <stdio.h>

int main() {
  int op;
  float valor = 1000.00, bancario;

  setlocale(LC_ALL, "portuguese");
  do {
    op = 0;
    printf("\n========MENU DE  OPÇÕES========");
    printf("\n|        1- DEPÓSITO         |");
    printf("\n|        2- SAQUE            |");
    printf("\n|        3- SALDO            |");
    printf("\n|        4- SAIR             |");
    printf("\n==============================");
    printf("\nOPÇÃO: ");
    scanf("%d", &op);
    while(getchar() != '\n');

    switch (op) {
    case 1:
        bancario = 0;
        printf("\nDIGITE O VALOR QUE SERÁ DEPOSITADO: ");
        scanf("%f", &bancario);
        while(getchar() != '\n');


      if(bancario <= 0){
        printf("\nDIGITE UM VALOR VÁLIDO.");
        break;
      } else{
        valor += bancario;
        printf("\nDEPÓSITO REALIZADO COM SUCESSO");
        printf("\nSEU SALDO AGORA É DE: R$ %.2f", valor);
        break;
      }

    case 2:
        bancario = 0;
        printf("\nDIGITE O VALOR QUE SERÁ SACADO: ");
        scanf("%f", &bancario);
        while(getchar() != '\n');

      if (valor - bancario < 0) {
        printf("\nSALDO INSUFICIENTE");
        break;

      } else if (bancario == 0 || bancario < 0){
        printf("\nSAQUE NÃO CONCLUÍDO.");
        break;
      } else {
        valor -= bancario;
        printf("\nSAQUE REALIZADO COM SUCESSO");
        printf("\nSEU SALDO AGORA É DE: R$ %.2f", valor);
        break;
      }

    case 3:
        printf("\nSEU SALDO É DE: R$ %.2f", valor);
        break;

    case 4:
        printf("\nFIM DAS TRANSAÇÕES.");
        break;

    default:
        printf("\nOPÇÃO NÃO ENCONTRADA.");
    }
  } while (op >= 0 && op <= 3);

  return 0;
}
