/*Sviluppare una function C che, dati come parametri di input un array di char e il suo
size, determina e restituisce come parametro di output l’array occorrenze (di size 21)
del numero delle occorrenze dell’evento a precede ognuna delle 21 lettere
dell’alfabeto italiano (cioè occorrenze[0] è il numero di volte in cui accade che “a
precede a”, cioè che nel testo compare aa, occorrenze[1] è il numero di volte in cui
accade che “a precede b”, cioè che nel testo compare ab, occorrenze[2] è il numero
di volte in cui accade che a precede c, cioè che nel testo compare ac, ...).*/
#include <stdio.h>
#include <string.h>
void traccia16(char *,int,int *);
int main()
{
    char a[]={"abba ak acca appa atta"};
    size_t n_a = sizeof (a) / sizeof (a[0]);
    int occorrenze[21]={0};
    traccia16(a,n_a,occorrenze);
}
void traccia16(char *a,int n_a,int *occorrenze)
{
    char *parola, alfabeto[]={'a','b','c','d','e','f','g','h','i','l','m','n','o','p','q','r','s','t','u','v','z'};
    strlwr(a);
    int i;
    for(parola=strchr(a, 'a'); parola!=NULL; parola=strchr(parola+1, 'a')){
        for (i=0; i<n_a; i++){
            if (*(parola+1)==alfabeto[i])
                occorrenze[i]++;
        }
    }
    for(i=0;i<21;i++)
        printf("%d\n",occorrenze[i]);

}
