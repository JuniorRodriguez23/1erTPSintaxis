#ifndef SCANNER_H_INCLUDED
#define SCANNER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
enum Tokens {FDT, SEP, CAD}; // FDT: Fin de Texto , SEP: Separador, CAD: Cadena
int get_token();
int is_string(char);

char buffer[150];

#endif