#include <string.h>
#include <time.h>
#include <stdio.h>

typedef struct cards    
{
    int number;
    char type_card;
}cards;

void Generate_mazo(cards* mazo){ //genera las cartas del mazo de manera ordenada
    int cont = 1;
    int i_palo = 0;
    char palo[4] = {'E', 'B', 'O', 'C'};    //inicial de cada palo
    for (int i = 0; i < 48; i++)    //se itera hasta que complete todas las cartas del mazo
    {
        mazo[i].number = cont;  //asigna el numero de la carta en cada posicion de i (numeros entre 1 y 12)
        mazo[i].type_card = palo[i_palo];   //asigna el palo de la carta en cada posicion de i (por cada 12 iteraciones cambia de palo)
        
        if (cont == 12)
        {
            cont = 0;   //resetea el contador
            i_palo++;   //cambia de palo
        }
        cont++;
    }
    
}

