#include <stdio.h>

//Definimos el dato de la semana 
enum DIA_SEMANA {LUNES, MARTES, MIERCOLES, JUEVES, VIERNES, SABADO, DOMINGO};
const char* nombresDias[] = {"Lunes", "Martes", "Miércoles", "Jueves", "Viernes", "Sábado", "Domingo"};

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
        return 1; // salimos del programa con código de error
    }
    // Mostramo el día de la semana
    switch (hoy)
    {
    case LUNES/* constant-expression */:
        /* code */
        printf("Hoy es %s\n", nombresDias[hoy]);
        break;
    case MARTES:
        printf("Hoy es %d\n", hoy);
        break;
    case MIERCOLES:
        printf(" Hoy es %d\n", hoy);
        break;
    case JUEVES:
        printf("Hoy es %d\n", hoy);
        break;
    case VIERNES:
        printf("Hoy es %d\n", hoy);
        break;
    case SABADO:
        printf("Hoy es %d\n", hoy);
        break;
    case DOMINGO:
        printf("Hoy es %d\n", hoy);
        break;
    }

    return 0;
}