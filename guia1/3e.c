#include<stdio.h>
float o=0; /*deviacion estandar*/
float x=0; /*numero observado*/
float u=0; /*valor medio*/
float z=0; /*deviacion estandar normal*/
int c,st;
 int main(void){
      printf("ingrese  el numero observado\n");
   if(!(st=scanf("%f",&x))){
     fprintf(stderr,"%s\n","error reinserte numero");
      
     } 
     printf("ingrese  valor medio\n");
   if(!(st=scanf("%f",&u))){
     fprintf(stderr,"%s\n","error reinserte numero");
     st=scanf("%f",&x);
     }
     printf("ingrese la derivacion estandar\n");
   if(!(st=scanf("%f",&o))){
     fprintf(stderr,"%s\n","error reinserte numero");
     st=scanf("%f",&x);
     }
     z=(x-u)/o;
     printf("%.2f\n", z);
    return 0;
   


 }