#include <stdio.h>


int Principal_menu(){ //retorna un int sobre la opcion seleccionada
    int option = 1, selection=0;
    while (option != 0)
    {   
        //clear
        printf("\t\tBIENVENIDO AL DESCONFIO\n\n");
        printf("1- Jugar\n");
        printf("2- Resultados\n");
        printf("0- Salir\n");
        printf("Selecciones una opcion:\n");
        scanf("%i", &option);
        
        switch (option) //redirige el menu
        {
        case 1:
            selection = Player_menu();
            option = 0;
            break;
        case 2:

            break;
        default:
            printf("\t\tGRACIAS POR JUGAR");
            break;
        }
        
    }

return option;


}
int Player_menu(){
    int opcion = -1;
    while (opcion < 0 || opcion > 4)
    {
       
        printf("\t\tSELECCIONE LA CANTIDAD DE JUGADORES\n\n");
        printf("1- UN JUGADOR VS PC\n");
        printf("2- DOS JUGADORES\n");
        printf("3- TRES JUGADORES\n");
        printf("4- CUATRO JUGADORES\n\n");
        printf("0- VOLVER AL MENU ANTERIOR\n");
        printf("Selecciones una opcion:\n");
        scanf("%i", &opcion);
    }
    
    return opcion;

}   


int Result_menu(){

}

