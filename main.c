#include "alumnos.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){

    cargar_alumnos(&v_alumnos, &n_alumnos);

//    printf ("%s", v_alumnos[0].id);

    crear_alumno(&v_alumnos, &n_alumnos);

    guardar_alumnos(v_alumnos, n_alumnos);

    return 1;
}
