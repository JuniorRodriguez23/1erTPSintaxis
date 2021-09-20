#include "scanner.h"
#include "scanner.c"

int main(int argc, const char *argv[]) {
    int resul;
   do{

       resul = get_token();
        switch(resul){
            case SEP:
                printf("Separador: %c\n", buffer[0]);
                buffer[0] = '\0';
                break;
        
        case CAD:
            printf("Cadena: %s\n", buffer);
            memset(buffer,0,150); //vaciar el buffer
            break;
        }
   }while (resul != FDT);
    printf("Fin de Texto");
    return 0;
}