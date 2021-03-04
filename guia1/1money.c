#include <stdio.h>
char valor_dolar,valor_peso,valor_reales,valor_euro; 
float cant_inicial,cant_final;
int main(void) {
   printf("elija entre pesos(P),reales(R),dolares(D) y euros(E) \n");
   scanf("%f" ,&cant_inicial);
   printf("n: %f \n" ,cant_inicial );
  return 0;
}