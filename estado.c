#include <stdio.h>

//Definimos el  tipo de dato
enum ESTADO {EXIT, OK };

int main(){
    //Variable 
    enum ESTADO proceso;
    proceso = OK; //Asignamos el valor OK a la variale

    //Bucle while
    while (proceso)
    {
        /* code */
        printf("El proceso esta en estado OK.\n");
        proceso = EXIT;
    }
    
    return 0;
}