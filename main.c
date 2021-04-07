#include <stdio.h>

int main(void) {
  //declarar
 float nota1, nota2, nota3, nota4;
 float media; 
 //frase que irá aparecer no exercício
 printf("\n lançar as notas:");
 //ler
 scanf("%f", &nota1);
 scanf ("%f", &nota2);
 scanf ("%f", &nota3);
 scanf ("%f", &nota4);

 media = (nota1 + nota2 + nota3 + nota4) / 4;

 printf("\n A média é:%2.2f", media);
}