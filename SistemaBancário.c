#include <stdio.h>
#include <locale.h>

int main(){
	char op;
	float valor = 1000.00, bancario;

setlocale(LC_ALL,"portuguese");
do{
	printf("\n========MENU DE  OPÇÕES========");
	printf("\n|        1- DEPÓSITO         |");
	printf("\n|        2- SAQUE            |");
	printf("\n|        3- SALDO            |");
	printf("\n|        4- SAIR             |");
	printf("\n==============================");
	printf("\nOPÇÃO: ");
	scanf(" %c", &op);

switch(op){
	case '1':
	   	printf("\nDIGITE O VALOR QUE SERÁ DEPOSITADO: ");
	   	scanf("%f", &bancario);
		
	   	valor = valor + bancario;
		
		   printf("\nDEPÓSITO REALIZADO COM SUCESSO");
		   printf("\nSEU SALDO AGORA É DE: R$ %.2f", valor);
	break;
	
	case '2':
	   	printf("\nDIGITE O VALOR QUE SERÁ SACADO: ");
		   scanf("%f", &bancario);
		
		valor = valor - bancario;
		
		if(valor < 0){

         valor = valor + bancario;
		        printf("SALDO INSUFICIENTE");

		} else {
		
	        	printf("\nSAQUE REALIZADO COM    SUCESSO");
	    	    printf("\nSEU SALDO AGORA É DE: R$ %.2f", valor);	
	}

	break;
	

	case '3':
		   printf("\nSEU SALDO É DE: R$ %.2f", valor);
	break;
	
	case '4':
		   printf("\nFIM DAS TRANSAÇÕES.");
	break;

 default:
    	printf("\nOPÇÃO NÃO ENCONTRADA.");
 break;

}
}while( op >= '1' && op <= '3');
	
return 0;
}