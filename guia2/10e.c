#include<stdio.h>
#define  THREE_M_MANUFACTURER_ID 1
#define  MAXWELL_MANUFACTURER_ID 2
#define  SONY_MANUFACTURER_ID 3
#define VERBATIM_MANUFACTURER_ID 4

#define THREE_M_NAMING "3M Corporation"
#define MAXWELL_NAMING "Maxwell Corporation"
#define SONY_NAMING "Sony Corporation"
#define VERBATIM_NAMING "Verbatim Corporation"

/*usar perifericos*/
typedef enum{
  CORPORATION_THREE_M,
  CORPORATION_MAXWELL,
  CORPORATION_SONY,
  CORPORATION_VERBATIM
  }manufacturer_t;
  
  
  
  int main(void){
    int option;
    manufacturer_t manufacturer;

    printf("ingrese el id del fabricante:\n");
    printf("%d -%s\n",THREE_M_MANUFACTURER_ID, THREE_M_NAMING);printf("%d -%s\n", MAXWELL_MANUFACTURER_ID,MAXWELL_NAMING);
    printf("%d -%s\n", SONY_MANUFACTURER_ID,SONY_NAMING);
    printf("%d -%s\n",VERBATIM_MANUFACTURER_ID,VERBATIM_NAMING);

    scanf("%d", &option); /*validar*/
    /*traduccion*/
    switch(option){
    case  THREE_M_MANUFACTURER_ID:
      manufacturer=CORPORATION_THREE_M;
      break;
    case MAXWELL_MANUFACTURER_ID:
      manufacturer=CORPORATION_MAXWELL;
      break;
    case SONY_MANUFACTURER_ID:
      manufacturer=CORPORATION_SONY;
      break;
    case VERBATIM_MANUFACTURER_ID:
      manufacturer=CORPORATION_VERBATIM;
      break;
    default:
    manufacturer =CORPORATION_VERBATIM;

    }
    /*procedimiento*/
    switch(manufacturer){
      case CORPORATION_THREE_M:
        printf("%s\n",THREE_M_NAMING);
        break;
      case CORPORATION_MAXWELL:
        printf("%s\n",MAXWELL_NAMING);
        break;
      case CORPORATION_SONY:
        printf("%s\n",SONY_NAMING);
        break;
      case CORPORATION_VERBATIM:
        printf("%s\n",VERBATIM_NAMING);
        break;
      
    }
    return 0;

  }
