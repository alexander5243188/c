#include <stdio.h>

//Definimos el dato de la semana 
enum DIA_SEMANA {LUNES, MARTES, MIERCOLES, JUEVES, VIERNES, SABADO, DOMINGO};

int main(){
    // Declaramos la variable hoy de tipo DIA_SEMANA
    enum DIA_SEMANA hoy;
    int numeroDia;

    // Instrucciones
    printf("Escribe el número del día (1 al 7)\n");
    scanf("%d", &numeroDia);

    //Asigna el valor al día
    switch (numeroDia)
    {
    case 1/* constant-expression */:
        /* code */
        hoy = LUNES;
        break;
    case 2:
        hoy = MARTES;
        break;
    case 3:
        hoy = MIERCOLES;
        break;
    case 4:
        hoy = JUEVES;
        break;
    case 5:
        hoy = VIERNES;
        break;
    case 6:
        hoy = SABADO;
        break;
    case 7:
        hoy = DOMINGO;
        break;    
    default:
        printf("Número invalido, debe estar entre 1 y 7\n");     
        return 1;
    }

    return 0;
}