#include <stdio.h> 
#include <conio.h> 
//int n1, quadrado=0;  //vari�vel global
int main() 
{ 
 int n1, quadrado=0;  
 printf("Digite um numero: ");
 //scanf()- fun��o de captura (leitura)
 scanf("%i",&n1); //o "%i" indica que � uma variavel inteira - o "&" indica que o valor ir� para o endere�o de n1
 quadrado = n1 * n1;
 printf("Numero digitado............: %i\n",n1);
 printf("Quadrado do Numero digitado: %i\n", quadrado);
} 
