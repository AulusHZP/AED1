#include <stdio.h>

int main(void) {
  int numero1 = 0;
  printf("\nDigite o primeiro numero: ");
  scanf("%i", &numero1);
  int numero2 = 0;
  printf("\nDigite o segundo numero: ");
  scanf("%i", &numero2);
  int numero3 = 0;
  printf ("\nDigite o terceiro numero: ");
  scanf ("%i", &numero3);
  if ((numero1 != numero2) && (numero1 != numero3) && (numero2 != numero3))
  {
    if (((numero1 < numero2) && (numero1 > numero3)) || ((numero1 > numero2) && (numero1 < numero3)))
    {
      printf ("\n\nO primeiro numero esta entre o segundo e o terceiro numero.");
    }
    else
    {
      printf ("\n\nO primeiro numero nao esta entre o segundo e o terceiro numero.");
    }
  }
  
  return 0;
}