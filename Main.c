#include <stdio.h>
#include "Menu.h"

int main(){
   
    int seleccion = menu_principal();

    switch (seleccion) //redirige el menu
    {
    case 1:
        /* code */
        break;
    case 2:

        break;
    default:
        printf("\t\tGRACIAS POR JUGAR");
        break;
    }
    return 0;
}