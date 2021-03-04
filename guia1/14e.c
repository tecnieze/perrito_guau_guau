#include<stdio.h>
#define SUM_ERROR 10E-4

/*2.7182*/

int main(void){

int N=1;
double e =1;
double invf =1;

while (invf >SUM_ERROR){
	invf/=N; 
	e+=invf;
	N++;
}
printf("elvalor de e es: %.10f\n", e);
return 0;
}

