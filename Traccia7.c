/*Scrivere una funzione che dati in input due array di strutture del seguente tipo
struct prodotto {char *nome; int codice; double prezzo;};
restituisce in output 1 se i due array di struct sono uguali, 0 se non lo sono. Si noti
che due dati struct sono uguali se sono uguali tutti i loro campi.*/
#include <stdio.h>
#include <string.h>
struct prodotto
{
    char *nome;
    int codice;
    double prezzo;
};
typedef struct prodotto Prodotto;
int traccia7(Prodotto [],int,Prodotto [],int);
int main()
{
    Prodotto a[]={{"Grissini",001,2}};
    Prodotto b[]={{"Pane",002,1}};
    size_t n_a = sizeof (a) / sizeof (a[0]);
    size_t n_b = sizeof (b) / sizeof (b[0]);
    int v;
    v= traccia7(a,n_a,b,n_b);
    printf("%d",v);
}
int traccia7(Prodotto a[],int n_a,Prodotto b[],int n_b)
{
    if((n_a==n_b)&&(a->nome==b->nome)&&(a->codice==b->codice)&&(a->prezzo==b->prezzo))
        return 1;
    else
        return 0;
}
