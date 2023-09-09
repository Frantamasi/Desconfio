#include <string.h>
#include <time.h>
#include <stdio.h>
#define MAX_CARDS 48
typedef struct cards    
{
    int number;
    char type_card;
}cards;

int main()
{
    cards mazo[MAX_CARDS];
    schuffle(mazo);
    return 0;
}