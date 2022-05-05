#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
#include <time.h>
#include <locale.h>



int main(){
setlocale(LC_ALL, "Portuguese");
struct spilha pilha;
int i, numerador, resto;

 
srand(time(NULL));
numerador = rand()%100;

init(&pilha);

printf("O número é %i\n\n", numerador);

printf("E o seu binário é: ");

while(1){
	if(numerador ==1 ) break;
	resto = numerador %2;
	numerador = numerador/2;
	push(&pilha, resto);
	printf("%i", resto);
}



}
