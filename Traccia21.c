/*
Scrivere un programma per simulare l'inserimento di un PIN per il telefonino.
Nella prima fase viene costruito il PIN di riferimento, che deve essere di lunghezza 5
e deve essere costruito in modo casuale. Nella seconda fase l’utente inserisce il
codice di tentativo e ha al massimo 3 tentativi per indovinarlo.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int i,Tentativi;
    char Pin[5];
    char PinSegreto[5]={48+rand()%10,48+rand()%10,48+rand()%10 ,48+rand()%10 ,48+rand()%10};
    printf("Pin segreto:");

    for(i=0;i<5;i++){
        printf("%c", PinSegreto[i]);}

    Tentativi=0;
    do{
        printf("\nInserisci Pin tentativo %d ", Tentativi+1);
        gets(Pin);
        printf("La lunghezza del pin e'%d\n", strlen(Pin));
        if(strncmp(Pin , PinSegreto, 5) ==0){
            printf("Corretto\n");
            Tentativi=4;}
        Tentativi++;}
    while(Tentativi<3);
    return 0;
}
