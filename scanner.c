#include "scanner.h"

int get_token()
{
 int i =0;
    char caracter;
    caracter = getchar();

    if (caracter !=EOF){
        while (isspace(caracter)){
            caracter= getchar();
        }

        if(caracter == ','){
            buffer[0] = ',';
            return SEP;
        }

 while (is_string(caracter)){
        buffer[i] = caracter;
        i++;
        caracter= getchar();
    }
    
    ungetc(caracter,stdin);

    return CAD;
 }
        
  return FDT;    
}

int is_string(char c) 
{
    if (c != ',' && !isspace(c) && c != EOF){
        return 1;
    }
    return 0;
}