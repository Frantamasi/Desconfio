#include <stdio.h>
#include "Menu.h"

int main(){
   
    int selection = Principal_menu();

    switch (selection) //redirige el menu
    {
    case 1:
        
        break;
    case 2:

        break;
    default:
        printf("\t\tGRACIAS POR JUGAR");
        break;
    }
    return 0;
}