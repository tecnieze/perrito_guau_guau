#include <stdio.h>

typedef enum{
  falso,
  ok
}status_t;
int main(void){
status_t idem=ok;
switch (idem){
 case  ok:
    printf("OK\n");
    break;
 default:
    printf("ERROR\n");
    break;
}

 /*if(idem == ok)
 {
   printf ("OK\n");
 }
 else {
   printf ("ERROR\n");
 }*/
  
}

