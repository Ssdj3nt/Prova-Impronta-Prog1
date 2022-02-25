/*
Dato un elenco (array) di persone partecipanti a un concorso, ordinare l’elenco in
ordine alfabetico in base al campo cognome. La struttura che identifica il partecipante è
struct persona {char *nome; char *cognome;};
typedef struct persona id;
struct partecipante {id *utente; unsigned short codice; };
*/
#include <stdio.h>
#include <string.h>
struct persona{
    char* nome;
    char* cognome;
};
typedef struct persona id;
struct partecipante{
    id utente;
    unsigned short codice;
};
typedef struct partecipante p;
void traccia20(p Partecipante[]);
void Scambio(p *a, p *b);
void main()
{
    p partecipante[100];

    partecipante[0].utente.nome="Francesco";
    partecipante[0].utente.cognome="Porritiello";
    partecipante[0].codice=2486;

    partecipante[1].utente.nome="Rosa";
    partecipante[1].utente.cognome="Errichiello";
    partecipante[1].codice=2487;

    partecipante[2].utente.nome="Francesco";
    partecipante[2].utente.cognome="Esposito";
    partecipante[2].codice=2488;

    partecipante[3].utente.nome="Nicola";
    partecipante[3].utente.cognome="Errichiello";
    partecipante[3].codice=2489;
    traccia20(partecipante);
}
void traccia20(p Partecipante[])
{
    int i;
    int ult_scambio;
    int fine_ord;
    int n=3;
    fine_ord=n-1;

    while (fine_ord!=0)
    {   // Se non ci sono più elementi da scambiare porto ultimo scambio a 0
        // Darà il suo valore a fine_ord e usciremo dal while
        ult_scambio=0;
        // Controllo tutti gli elementi della struct
        for (i=0; i<fine_ord; i++)
        {   // Se il partecipante di indice I è alfabeticamente maggiore del partecipante di indice I+1
            if (strcmp(Partecipante[i].utente.cognome, Partecipante[i+1].utente.cognome) > 0)
            { // Scambio i dati
                Scambio(&Partecipante[i], &Partecipante[i+1]);
                // E porto l'ultimo scambio effettuato a I
                ult_scambio=i;
            }
        } // Riporto la I a ultimo scambio, se l'if non si verifica più, nella prossima iterazione
        // fine_ord avrà il valore 0
        fine_ord=ult_scambio;
    }
    // Stampo infine l'array ordinato
    for (i=0;i<n;i++) {
        puts(Partecipante[i].utente.cognome);
    }
}
void Scambio(p *a, p *b)
{
    p tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
