/*Due giocatori si sfidano lanciando un “dado truccato”. Il dado ha dei valori interi
nell’intervallo [5 , 15]. A ogni turno vince il giocatore che ottiene un punteggio
maggiore. In caso di parità il punto viene assegnato a entrambi. Simulare 10 sfide e
visualizzare il giocatore che vince più volte.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
    int i,dado_1,dado_2,cnt_1=0,cnt_2=0;
    srand((unsigned int) time(0));
    for(i=0;i<10;i++)
    {
        dado_1=5+rand()%11;
        dado_2=5+rand()%11;
        if(dado_1>dado_2)
            cnt_1++;
        else if(dado_2>dado_1)
            cnt_2++;
        else
        {
            cnt_2++;
            cnt_1++;
        }
    }
    if(cnt_1>cnt_2)
        printf("Vince il giocatore 1 con %d vittorie\n",cnt_1);
    else if(cnt_2>cnt_1)
        printf("Vince il giocatore 2 con %d vittorie\n",cnt_2);
    else
        printf("Pareggio\n");
}
