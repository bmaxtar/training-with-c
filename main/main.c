#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
   int resultat = 0, membre1 = 0, membre2 = 0;

   printf("Entre le nombre 1: ");
   scanf("%d", &membre1);
   printf("Entre le nombre 2: ");
   scanf("%d", &membre2);

   resultat = membre1 + membre2;

   printf("%d + %d = %d\n", membre1, membre2, resultat);
   printf("%d");
   return 0;
}