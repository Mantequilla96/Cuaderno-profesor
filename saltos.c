#include "saltos.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Cabecera: void quitar_saltos (string cadena)
Precondici�n: string de caracteres no vac�a
Postcondici�n: le quita al string el salto de l�nea de producto de la funci�n "fgets"
*/
void quitar_saltos(char *cadena)
{
    char *p;
    p = strchr(cadena, '\n');
    if (p)
        *p = '\0';
}
