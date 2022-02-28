/*
Scrivere un programma per simulare l'inserimento di un PIN per il telefonino.
Nella prima fase viene costruito il PIN di riferimento, che deve essere di lunghezza 5
e deve essere costruito in modo casuale. Nella seconda fase l’utente inserisce il
codice di tentativo e ha al massimo 3 tentativi per indovinarlo.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
    srand((unsigned int)time(0));
    int i,tentativi=0,v=0,pin[5],pins[5];

    printf("Pin segreto:");
    for(i=0;i<5;i++){
        pins[i]=rand()%10;
        printf("%d", pins[i]);}

    do{
        printf("\n\nInserisci il pin.\n%d° tentativo:\n",tentativi+1);
        for(i=0;i<5;i++){
            scanf("\n%d",&pin[i]);
            if(pin[i]==pins[i])
                v++;}

        if(v==5){
            printf("Pin corretto.");
            tentativi=3;}
        else
            tentativi++;
    }while(tentativi<3);
}
