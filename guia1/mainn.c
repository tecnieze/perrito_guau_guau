#include <stdio.h>
#include <string.h>
size_t i;
char UNIDAD[0];
int c, st;
int CANT_RES=0;
float TOTAL=0;
float RES=0;

int main(void)
{
  printf("inque la cantidad de resistencias de su circuito serie \n");
  //scanf("%d" , &CANT_RES);
  if(!(st=scanf("%d",&CANT_RES)))
  {
    fprintf(stderr,"%s\n", "error ");
    return 1;
  }
  while((c=getchar()) != '\n');
  printf("indique sus resistencias  \n");
  for (i=0;CANT_RES>i;i++)
  {
    
   scanf("%f  %c", &RES , UNIDAD);
   
   printf("R:%.1f", RES);
    printf("%s\n", UNIDAD);
  
    if(strcmp(UNIDAD, "K")==0 )
    RES=RES*1000;
    if(strcmp(UNIDAD, "M")==0 )
    RES=RES*1000000;
    
  TOTAL=TOTAL+RES;
  
}
if(TOTAL>1000){
 if(TOTAL>1000000){
  printf("la resistencia total del circuito es %.1fM\n", TOTAL/=1000000);
  return 0;
 }
 else{
   printf("la resistencia total del circuito es %.1fK\n", TOTAL/=1000);
   return 0;
 }


  }
 printf("la resistencia total del circuito es %.1f\n", TOTAL);
  return 0;
}