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
void traccia20(p Partecipante[],int n);
void Scambio(p *a, p *b);
void main()
{
    p partecipante[10];
    size_t n = sizeof (partecipante)/sizeof (partecipante[0]);

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
    traccia20(partecipante,n);
}
void traccia20(p Partecipante[],int n)
{
    int i;
    int ult_scambio;
    int fine_ord;
    fine_ord=n-1;

    while (fine_ord!=0)
    {
        ult_scambio=0;
        for (i=0; i<fine_ord; i++){
            if (strcmp(Partecipante[i].utente.cognome, Partecipante[i+1].utente.cognome) > 0){
                Scambio(&Partecipante[i], &Partecipante[i+1]);
                ult_scambio=i;}
        }
        fine_ord=ult_scambio;
    }
}
void Scambio(p *a, p *b)
{
    p tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
