#include <stdio.h>
#include "Menu.h"
#include "Interactuar_mazo.h"

#define MAX_CARDS 48
   

int main(){
 
    cards mazo[MAX_CARDS];
    schuffle(mazo);
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