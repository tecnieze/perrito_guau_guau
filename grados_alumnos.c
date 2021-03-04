#include<stdio.h>
int CANT_CREDITOS;
int st;
int main(void){
/*if (!(st=scanf("%i \n",&CANT_CREDITOS)))
  fprintf(stderr,"%s \n","ERROR");*/
  scanf("%d \n",&CANT_CREDITOS);
if (CANT_CREDITOS <48 )
	printf("Primer año\n");
if (143<CANT_CREDITOS)
printf("Cuarto año\n");
if (47<CANT_CREDITOS<96)
	printf("Segundo año\n");
if (95<CANT_CREDITOS<145)
printf("Tercer año\n");
}