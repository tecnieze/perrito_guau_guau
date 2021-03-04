#include<stdio.h> 
#include <math.h>
  float n;
int st;
int main(void){
  
    printf("Ingrese un numero : \n");
   if(!(st=scanf("%f",&n))){
     fprintf(stderr,"%s\n","error ingreso");
     return 1;
   }
n= sqrt(n);
    printf("LA raiz cuadrada es: %.2f\n",n);
n=1/n;  
  printf("La inversa del numero es:%.2f\n",n);
return 0;
}