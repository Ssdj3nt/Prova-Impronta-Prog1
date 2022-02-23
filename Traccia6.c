/*TRACCIA 6
Scrivere una funzione che dati in input due array ordinati (rispetto al campo
matricola) di elementi della seguente struttura
struct studente {char *nome; char *cognome; int matricola;};
restituisca in output l’array fusione dei due array. La fusione deve avvenire in base
al campo matricola.*/
#include <stdio.h>

struct studente
{
    char *nome;
    char *cognome;
    int matricola;
};
typedef struct studente Studente;
void traccia6(Studente [],int, Studente [],int, Studente []);
void main()
{
    Studente a[]={"Francesco","Porritiello",2486};
    Studente b[]={"Errichiello","Rosa",5583};
    size_t n_a = sizeof (a) / sizeof (a[0]);
    size_t n_b = sizeof (b) / sizeof (b[0]);
    Studente c[n_a+n_b];
    traccia6(a,n_a,b,n_b,c);
}
void traccia6(Studente *a, int n, Studente *b, int m, Studente *fusione) {
    int i;
    int countA = 0, countB = 0, countC = 0;
    while (countA < n && countB < m) {
        if (a[countA].matricola < b[countB].matricola)
            fusione[countC++] = a[countA++];
        else
            fusione[countC++] = b[countB++];
    }
    while (countA < n)
        fusione[countC++] = a[countA++];
    while (countB < m)
        fusione[countC++] = b[countB++];

    for(i=0;i<countC;i++)
        printf("%s,%s,%d.\t",fusione[i].nome,fusione[i].cognome,fusione[i].matricola);
}
